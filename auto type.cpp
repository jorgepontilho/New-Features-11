#include <vector>

int main()
{
    std::vector<int> vec = {2, 3, 4, 5};
    std::vector<int> m_vec;

    // C++ 03
    //for (std::vector<int>::iterator it = vec.begin(); it!=vec.end(); ++ it)
    
    // C++ 11: use auto type
    for (auto it = vec.begin(); it!=vec.end(); ++ it)
        m_vec.push_back(*it);

    auto a = 6;    // a is a integer
    auto b = 9.6;  // b is a double
    auto c = a;    // c is an integer
    auto const x = a;   // int const x = a
    auto& y = a;        // int& y = a
    
    return 0;
}