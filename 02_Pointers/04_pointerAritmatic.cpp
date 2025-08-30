#include <iostream>
using namespace std;

int main() {
    // Example 1: Incrementing a normal variable
    int x = 5;
    cout << "Value of x: " << x << endl;  // prints 5

    x++;  
    cout << "After increment, x: " << x << endl;  // prints 6


    // Example 2: Pointer Arithmetic
    int y = 4;
    int* ptr = &y;   // ptr stores the address of y

    cout << "Address stored in ptr: " << ptr << endl;   // prints memory address (in hexadecimal)
    cout << "Value at ptr: " << *ptr << endl;           // prints 4

    *ptr = *ptr + 1;  // increments the value at that memory location
    cout << "After incrementing value using pointer: " << *ptr << endl;  // prints 5


    // Example 3: Pointer increment (Hexadecimal Demo)
    int arr[3] = {10, 20, 30};
    int* p = arr;   // p points to first element of array

    cout << "Initial address (p): " << p << endl;
    cout << "Value at p: " << *p << endl;   // 10

    p = p + 1;   // move pointer to next integer (4 bytes ahead)
    cout << "After p+1, address: " << p << endl;
    cout << "Value at new p: " << *p << endl;   // 20

    p = p + 1;   // again move 4 bytes ahead
    cout << "After p+2, address: " << p << endl;
    cout << "Value at new p: " << *p << endl;   // 30

    return 0;
}
