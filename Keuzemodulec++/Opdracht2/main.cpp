#include <iostream>
#include "Queue.h"

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

    std::cout << que.size() << std::endl;
    return 0;
}

/*template <class int[]>
T Sort () {
    return (result);
}*/
