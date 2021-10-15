
int arr[6];    //OK
int a() { return 3; }
//int arr1[a()+3];   // Compile Error - 'arr1' is not an integral constant-expression

// C++ 11
constexpr int aNew() { return 3; }  // happen at compile time.
int arrNew[aNew()+3];   // Create an array of size 6

// Write faster program with constexpr
constexpr int cubed(int x) { return x * x * x; }

int y = cubed(1789);  // computed at compile time

//Function cubed() is:
//1. Super fast. It will not consume run-time cycles
//2. Super small. It will not occupy space in binary.

int main() {

    return 0;

}
