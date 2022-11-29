#include <iostream>
#include "Queue.h"

template<typename T>
std::vector<T> sort(std::vector<T> listToSort)
{
    std::sort(listToSort.begin(),listToSort.end());
    return listToSort;
}

int main() {
    Queue <int> que;

    que.put(5);
    que.put(8);
    que.put(2);
    que.pop();
    que.put(1);
    que.put(33);
    que.pop();
    que.put(543);

    std::cout << que.size() << std::endl << std::endl;
    std::vector<int> bleh {3,2,7,1,2,9};

    bleh = sort<int>(bleh);

    std::for_each(bleh.begin(),bleh.end(),[](int numbah){ std::cout << numbah << std::endl;});
    std::cout << std::endl;

    std::vector<std::string> blehwords {"Cucumbers", "Are", "Really", "Fucking", "Good"};

    blehwords = sort<std::string>(blehwords);

    std::for_each(blehwords.begin(),blehwords.end(),[](std::string numbah){ std::cout << numbah << std::endl;});
    std::cout << std::endl;

    return 0;
}

/*template <class int[]>
T Sort () {
    return (result);
}*/
