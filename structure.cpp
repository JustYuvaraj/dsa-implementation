#include <iostream>
#include <stdio.h>  // For printf

using namespace std;

// Defining a structure
struct Rectangle {
    int length;   // 4 bytes
    int breadth;  // 4 bytes
    char x;       // 1 byte

    // 🧠 Note:
    // Due to memory alignment/padding, the compiler may add padding
    // so the structure size becomes a multiple of 4 or 8 bytes.
    // So this struct might be 12 bytes, not 9.
} r2, r3; // Global variables of type Rectangle

// Also valid declaration
struct Rectangle r4;

int main() {
    // Declaring a Rectangle and setting values manually
    struct Rectangle r1;
    r1.length = 14;
    r1.breadth = 15;

    // Direct initialization of a struct variable
    struct Rectangle r = {10, 5};

    // Print size of the structure
    printf("Size of Rectangle struct: %d bytes\n", sizeof(r1));

    // Print some values
    cout << "r1.length = " << r1.length << ", r2.length = " << r2.length << endl;

    return 0;
}
