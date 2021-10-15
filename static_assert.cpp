#include <assert.h>

int main() {

    // run-time assert
    assert( sizeof(int) == 4 );

    // Compile time assert (C++ 11)
    static_assert( sizeof(int) == 4 );

    return 0;

}
