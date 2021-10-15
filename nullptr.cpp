#include <iostream>

void foo(int i) { std::cout << "foo_int" << std::endl; }
void foo(char* pc) { std::cout << "foo_char*" << std::endl; }

int main() {
   
   //foo(NULL);   :7: error: call of overloaded 'foo(NULL)' is ambiguous

   // C++ 11
   foo(nullptr); // call foo(char*)
   return 0;
}

