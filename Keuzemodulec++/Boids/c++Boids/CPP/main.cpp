#include <SFML/Graphics.hpp>
#include <cmath>
#include <cstdlib>
#include <vector>

struct Boid
{
	sf::Vector2f position;
	sf::Vector2f velocity;
	sf::CircleShape shape;

	Boid(float x, float y)
	{
		position = sf::Vector2f(x, y);
		velocity = sf::Vector2f(rand() % 201 - 100, rand() % 201 - 100);
		shape.setRadius(10);
		shape.setFillColor(sf::Color::Green);
		shape.setOrigin(sf::Vector2f(10, 10));
	}

	void update(std::vector<Boid>& boids)
	{
		position += velocity * 0.01f;

		sf::Vector2f seperationRule = SeperationRule(boids);

		sf::Vector2f alignmentRule = AlignmentRule(boids);

		sf::Vector2f cohesionRule = CohesionRule(boids);

		sf::Vector2f boundingRule = BoundingRule(boids);

		velocity += seperationRule + alignmentRule + cohesionRule + boundingRule;
		
		shape.setPosition(position);
	}
	sf::Vector2f SeperationRule(std::vector<Boid>& boids)
	{
		// Separation rule: steer away from nearby boids
		sf::Vector2f separation_force(0, 0);
		for (auto& other_boid : boids)
		{
			if (&other_boid == this) continue;
			sf::Vector2f diff = position - other_boid.position;
			float distance = std::sqrt(diff.x * diff.x + diff.y * diff.y);
			if (distance < 50)
			{
				separation_force += diff / (distance * distance);
			}
		}
		separation_force.x *= 10;
		separation_force.y *= 10;
		return separation_force;
	}
	sf::Vector2f AlignmentRule(std::vector<Boid>& boids)
	{
		// Alignment rule: align velocity with average velocity of nearby boids
		sf::Vector2f alignment_force(0, 0);
		int neighbor_count = 0;
		for (auto& other_boid : boids)
		{
			if (&other_boid == this) continue;
			sf::Vector2f diff = position - other_boid.position;
			float distance = std::sqrt(diff.x * diff.x + diff.y * diff.y);
			if (distance < 100)
			{
				alignment_force += other_boid.velocity;
				neighbor_count++;
			}
		}
		if (neighbor_count > 0)
		{
			alignment_force.x /= neighbor_count;
			alignment_force.y /= neighbor_count;
		}
		alignment_force.x *= 10;
		alignment_force.y *= 10;
		return alignment_force;
	}
	sf::Vector2f CohesionRule(std::vector<Boid>& boids)
	{
		// Cohesion rule: move towards center of mass of nearby boids
		sf::Vector2f cohesion_force(0, 0);
		int neighbor_count = 0;
		for (auto& other_boid : boids)
		{
			if (&other_boid == this) continue;
			sf::Vector2f diff = position - other_boid.position;
			float distance = std::sqrt(diff.x * diff.x + diff.y * diff.y);
			if (distance < 100)
			{
				cohesion_force += other_boid.position;
				neighbor_count++;
			}
		}
		if (neighbor_count > 0)
		{
			cohesion_force.x /= neighbor_count;
			cohesion_force.y /= neighbor_count;
			cohesion_force = cohesion_force - position;
		}
		cohesion_force.x *= 10;
		cohesion_force.y *= 10;
		return cohesion_force;
	}
	sf::Vector2f BoundingRule(std::vector<Boid>& boids)
	{
		// Bounding rule: steer towards center of window if boid is about to move outside window
		sf::Vector2f bounding_force(0, 0);
		if (position.x < 0 || position.x > 800) {
			bounding_force.x = 400 - position.x;
		}
		if (position.y < 0 || position.y > 600) {
			bounding_force.y = 300 - position.y;
		}
		bounding_force.x *= 10;
		bounding_force.y *= 10;
		return bounding_force;
	}
};

int main()
{
	sf::VideoMode videomode(sf::VideoMode(sf::Vector2u(600, 600)));
	sf::RenderWindow window(videomode, "Boids");
	window.setFramerateLimit(60);

	std::vector<Boid> boids;
	for (int i = 0; i < 50; i++)
	{
		boids.push_back(Boid(rand() % 800, rand() % 600));
	}

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();

		for (auto& boid : boids)
		{
			boid.update(boids);
		}

		for (auto& boid : boids)
		{
			window.draw(boid.shape);
		}

		window.display();
	}

	return 0;
}
