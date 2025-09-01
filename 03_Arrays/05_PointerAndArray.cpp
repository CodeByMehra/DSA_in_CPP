// ===============================
// 📘 Notes: Pointers with Arrays in C++
// ===============================

// 🔹 1. Basics of Pointers
// - A pointer is a variable that stores the memory address of another variable.
// - Declaration:
//   int *ptr;   // pointer to int
//   char *cptr; // pointer to char

#include <iostream>
using namespace std;

int main() {
    cout << "---- Pointer Basics ----" << endl;
    int x = 10;
    int *p = &x;  // p stores the address of x
    cout << "Address of x: " << p << endl;
    cout << "Value of x using pointer: " << *p << endl; // dereferencing

    cout << "\n---- Array and Pointer Relationship ----" << endl;
    int arr[] = {4, 2, 6, 1, 7};

    // Array name itself acts as a pointer to first element
    cout << "Address of arr[0]: " << arr << endl;
    cout << "Value of arr[0] using *arr: " << *arr << endl;

    cout << "\n---- Using Pointer with Array ----" << endl;
    int *ptr = arr; // arr points to base address
    cout << "First element: " << *ptr << endl;
    cout << "Second element: " << *(ptr + 1) << endl;
    cout << "Third element: " << *(ptr + 2) << endl;

    cout << "\n---- Traversing Array using Pointer ----" << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";  // same as arr[i]
    }
    cout << endl;

    cout << "\n---- Printing Address and Value ----" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Address: " << (ptr + i)
             << "  Value: " << *(ptr + i) << endl;
    }

    return 0;
}


// ===============================
// 🔹 2. Key Points to Remember
// - arr → address of first element (arr[0])
// - *arr → value of arr[0]
// - *(arr + i) → arr[i]
// - ptr + i → moves pointer by i positions
// - &arr gives address of the entire array
//
// ✅ Advantages:
// - Easy traversal of arrays
// - Useful in functions (passing arrays)
// - Needed for dynamic memory allocation
// - More flexible than normal indexing
// ===============================
