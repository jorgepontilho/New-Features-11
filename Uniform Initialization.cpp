#include <string>
using namespace std;

// C++ 11 extended the scope of curly brace initialization
class Dog {
   public:
      Dog(int age, string name) {          
      };
};

int main()
{
    Dog d1 = {5, "Henry"};
    return 0;
}