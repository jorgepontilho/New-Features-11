#include <iostream>
#include <vector>

template<typename func>
void filter(func f, std::vector<int> arr) {
    for (auto i: arr) {
        if (f(i))
            std::cout  << i << " ";
    }
}

int main() {

    std::cout << [](int x, int y){return x+y;} (3,4) << std::endl;  // Output: 7
    auto f = [](int x, int y) { return x+y; };
    std::cout << f(3,4) << std::endl;   // Output: 7

    std::vector<int> v = {1, 2, 3, 4, 5, 6 };

    filter([](int x) {return (x>3);},  v);    // Output: 4 5 6
    filter([](int x) {return (x>2 && x<5);},  v); // Output: 3 4


    int y = 4;  
    filter([&](int x) {return (x>y);},  v);    // Output: 5 6
    //Note: [&] tells compiler that we want variable capture

    return 0;

}
