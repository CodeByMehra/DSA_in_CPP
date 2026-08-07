#include <iostream>
#include <vector>
using namespace std;

// User-defined Stack Data Structure using Array
class Stack {
public:
    vector <int> v;   // Fixed-size array to store stack elements
    

    // Constructor: Initialize index to -1 (empty stack)
    Stack() {
    }

    // Push operation: Add element to the top of the stack
    void push(int val) {
        // No overflow condition in vector
        v.push_back(val);
    }

    // Pop operation: Remove top element from the stack
    void pop() {
        // Check if stack is empty
        if (v.size()==0) {
            cout << "Stack is Empty!" <<endl;
            return;
        }
        v.pop_back();
    }

    // Top operation: Get the top element without removing it
    int top() {
        // Check if stack is empty
        if (v.size()==0) {
            cout << "Stack is Empty!" << endl;
            return;  // Return -1 if empty
        }
        return v[v.size()-1];  // Return the top element
    }

    // Size operation: Return the number of elements in the stack
    int size() {
        return v.size();
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
