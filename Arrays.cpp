#include <iostream>
#include <stdio.h> // For printf

using namespace std;

int main() {

    // Fixed-size array initialization
    int A[4];
    A[0] = 5;
    A[1] = 5;
    A[2] = 5;
    A[3] = 5;

    // Direct initialization of array (remaining elements auto-initialized to 0)
    int B[8] = {3, 3, 432, 34, 3};

    // Print elements at index 5 and 6 — will be 0 due to auto-initialization
    cout << "B[5]: " << B[5] << ", B[6]: " << B[6] << endl;

    // Initialize all elements to 0
    int C[10] = {0};

    // Size of arrays in bytes
    cout << "Size of B (bytes): " << sizeof(B) << endl;
    cout << "Size of A (bytes): " << sizeof(A) << endl;

    // Print a specific element using printf
    printf("A[2] = %d\n", A[2]);

    // Print all elements of array C using a traditional for-loop
    cout << "Elements of C: ";
    for (int i = 0; i < 10; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    // Range-based for-loop (for-each) to print elements of A
    cout << "Elements of A: ";
    for (int x : A) {
        cout << x << " ";
    }
    cout << endl;

    // Demonstrating variable-length arrays (VLA — allowed in C99, not standard C++)
    int n;
    cout << "Enter the size of array Z: ";
    cin >> n;

    
    int Z[n]; // Garbage values if not initialized

    cout << "Uninitialized values in Z: ";
    for (int i = 0; i < n; i++) {
        cout << Z[i] << " "; // Might print garbage
    }
    cout << endl;

    return 0;
}
