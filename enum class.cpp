#include <iostream>

enum apple {green_a, red_a};
enum orange {big_o, small_o};
apple a = green_a;
orange o = big_o;


// C++ 11
enum class appleNew {green, red};
enum class orangeNew {big, small};
appleNew aNew = appleNew::green;
orangeNew oNew = orangeNew::big;

int main() {

    if (a == o) 
        std::cout  << "green apple and big orange are the same\n";
    else
        std::cout  << "green apple and big orange are not the same\n";

   if (aNew == oNew) //no match for 'operator=='
      std::cout  << "New - green apple and big orange are the same\n";
   else
      std::cout  << "New - green apple and big orange are not the same\n";

}


