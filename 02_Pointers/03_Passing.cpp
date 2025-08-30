#include <iostream>
using namespace std;

// -------------------------------------------------
// Problem: Pass by Value
// -------------------------------------------------
// In this approach, values of 'a' and 'b' are copied
// into the function parameters. So, swapping happens
// only inside the function, and the changes do not
// affect the original variables in main().
// -------------------------------------------------

void swapByValue(int a, int b) {
    int temp = a;   // store value of 'a' in temp
    a = b;          // assign value of 'b' to 'a'
    b = temp;       // assign temp (old 'a') to 'b'
    return;
}

// -------------------------------------------------
// Solution: Pass by Reference (using pointers)
// -------------------------------------------------
// Here, instead of passing copies, we pass addresses
// of variables 'a' and 'b'. Pointers directly modify
// the values stored in memory, so changes reflect in main().
// -------------------------------------------------

void swapByReference(int* x, int* y) {
    int temp = *x;  // temp stores the value at address x (value of 'a')
    *x = *y;        // value at x (a) becomes value at y (b)
    *y = temp;      // value at y (b) becomes old value of a (temp)
    return;
}

int main() {
    int a = 8, b = 6;

    // ----- Problem Demo -----
    swapByValue(a, b);
    cout << "After swapByValue -> a: " << a << " b: " << b << endl;
    // Output: a = 8, b = 6 (NO CHANGE, because values were passed by copy)

    // ----- Solution Demo -----
    swapByReference(&a, &b);
    cout << "After swapByReference -> a: " << a << " b: " << b << endl;
    // Output: a = 6, b = 8 (SUCCESS, values are swapped)

    return 0;
}
 

// Notes:

// Pass by Value → Function works on copies of arguments → Original variables remain unchanged.

// Pass by Reference (pointers) → Function works on addresses of variables → Changes directly affect original variables.

// This concept is extremely important in DSA:

// Useful in swapping elements of arrays.

// Used in implementing sorting algorithms (like Quick Sort, Merge Sort).

// Essential for linked lists, trees, and graphs (where you manipulate memory directly).