#include <iostream>

#include <vector>
#include <algorithm>
#include <functional>
#include <string>
#include <numeric>
template<class T>
int getIndex(std::vector<T> v, T K)
{
    auto it = find(v.begin(), v.end(), K);

    // If element was found
    if (it != v.end())
    {

        // calculating the index
        // of K
        return it - v.begin();
    }
    else {
        // If the element is not
        // present in the vector
    }
}
bool IsOdd (int i) { return ((i%2)==1); }
bool IsEven (int i) { return ((i%2)!=1); }
int main() {
    // gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
    // 1) de vector in 2 nieuwe vectoren te splitsen: 1 met alles wat alfabetisch voor 'purple' komt, 1 met alles er na


    std::vector<std::string> colours{"red", "green", "white", "blue", "orange", "green", "orange", "black", "purple"};
    std::sort(colours.begin(), colours.end());

    std::vector<std::string> prePurple;
    std::vector<std::string> postPurple;

    int purpleIndex = getIndex<std::string>(colours,"purple");
    std::cout << "Assignment 1" << std::endl;
    for (int i = 0; i < colours.size(); i++) {
        // not the intended way but this will work for now

        if(i < purpleIndex){
            prePurple.push_back(colours[i]);
        }
        else if(i >purpleIndex){
            postPurple.push_back(colours[i]);
        }
        std::cout << colours.at(i) << ' ';
    }
    std::cout << std::endl;
    for (int i = 0; i < prePurple.size(); i++) {
        std::cout << prePurple.at(i) << ' ';
    }
    std::cout << std::endl;
    for (int i = 0; i < postPurple.size(); i++) {
        std::cout << postPurple.at(i) << ' ';
    }
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Assignment 2" << std::endl;
    {
        // 2) alle elementen UPPERCASE te maken.
        std::vector<std::string> colours{"red", "green", "white", "blue", "orange", "green", "orange", "black", "purple"};
        std::for_each(colours.begin(), colours.end(), [](std::string &word) {
            return std::transform(word.begin(), word.end(), word.begin(), [](char c) { return std::toupper(c); });
        });

/*
        for(std::string &s : colours){
            std::transform(s.begin(), s.end(), s.begin(),
                           [](char c){ return std::toupper(c); });
        }*/
        for (int i = 0; i < colours.size(); i++) {
            std::cout << colours.at(i) << ' ';
        }

    }
    {
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Assignment 3" << std::endl;
        // 3) alle dubbele te verwijderen
        std::vector<std::string> colours{"red", "green", "white", "blue", "orange", "green", "orange", "black", "purple"};
        sort( colours.begin(), colours.end() );
        colours.erase( unique( colours.begin(), colours.end() ), colours.end() );
        for (int i = 0; i < colours.size(); i++) {
            std::cout << colours.at(i) << ' ';
        }

    }

    // gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
    {
        // 1) alle negatieve elementen te verwijderen
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Assignment 4" << std::endl;
        std::vector<double> numbers{10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635};
        numbers.erase(remove_if(numbers.begin(), numbers.end(),  [](const double i) {return i < 0; }));
        for (int i = 0; i < numbers.size(); i++) {
            std::cout << numbers.at(i) << ' ';
        }
    }

    {
        // 2) voor alle elementen te bepalen of ze even of oneven zijn
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Assignment 5" << std::endl;
        std::vector<double> numbers{10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635};

        std::replace_if(numbers.begin(), numbers.end(), IsOdd,0);

        for (int i = 0; i < numbers.size(); i++) {
            std::cout << numbers.at(i) << ' ';
        }

    }

    {
        // 3) de som, het gemiddelde, en het product van alle getallen te berekenen
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Assignment 6" << std::endl;
        std::vector<double> numbers{10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635};
        double sum = std::accumulate(numbers.begin(), numbers.end(), 0);
        double average = std::accumulate(numbers.begin(), numbers.end(), 0) / numbers.size();
        double product = std::accumulate(numbers.begin(), numbers.end(), 1, std::multiplies<double>());
        std::cout << "Sum: " << sum << ' ' << std::endl;
        std::cout << "Average: " << average << ' ' << std::endl;
        std::cout << "Product: " << product << ' ' << std::endl;
    }

    return 0;
}

