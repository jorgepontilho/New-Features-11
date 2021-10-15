#include <iostream>
#include <list>

int main()
{
    std::list<int> lst = {2, 3, 4, 5};
    
    for (auto i: lst) { // works on any class that has begin() and end()
        std::cout << i ;    // readonly access
    }
    
    return 0;
}