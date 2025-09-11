#include <iostream>
using namespace std;

// User-defined Stack Data Structure using Array
class Stack {
public:
    int arr[5];   // Fixed-size array to store stack elements
    int idx;      // Index to track the top element of the stack

    // Constructor: Initialize index to -1 (empty stack)
    Stack() {
        idx = -1;
    }

    // Push operation: Add element to the top of the stack
    void push(int val) {
        // Check if stack is full
        if (idx == sizeof(arr) / sizeof(arr[0]) - 1) {
            cout << "Stack is Full!" << endl;
            return;
        }
        idx++;            // Move index up
        arr[idx] = val;   // Store value at top
    }

    // Pop operation: Remove top element from the stack
    void pop() {
        // Check if stack is empty
        if (idx == -1) {
            cout << "Stack is Empty!" << endl;
            return;
        }
        idx--;   // Move index down (effectively removing top element)
    }

    // Top operation: Get the top element without removing it
    int top() {
        // Check if stack is empty
        if (idx == -1) {
            cout << "Stack is Empty!" << endl;
            return -1;  // Return -1 if empty
        }
        return arr[idx];  // Return the top element
    }

    // Size operation: Return the number of elements in the stack
    int size() {
        return idx + 1;
    }
};

int main() {
    Stack st;

    // Initially stack is empty → top() returns -1
    cout << st.top() << endl;  // Output: Stack is Empty! -1

    // Push elements into the stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);  // This should print "Stack is Full!" because max size is 5

    // Print size of stack (should be 5)
    cout << st.size() << endl;  // Output: 5

    // Print top element of the stack (should be 50)
    cout << st.top() << endl;   // Output: 50
}
