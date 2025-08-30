#include <iostream>
using namespace std;

int main() {
    // Playing with Pointers
    // ---------------------
    // Dereference Operator (*) is also called the "Star Operator".
    // It is used to access the value stored at the address 
    // which the pointer is pointing to.

    int x = 122;      // Step 1: Declare an integer variable 'x' and assign value 122

    int* p = &x;      // Step 2: Declare a pointer 'p' that stores the address of 'x'

    cout << *p;       // Step 3: Dereference pointer 'p' to access the value stored at 'x'
                      // Output: 122
                     // Conclusion: *p ka matlab hai pehle p k container me jao vaha jis variable ka address hai vaha jao or uski jo value hai vo btao
    *p = 90; // This line is updating the value of x           dynamically by using the address stored in p  
    
    
    // Example : Calculate sum o two numbers using dereference operator

    cout<< "Example area outputs : ";
    int a = 5;
    int* ptra = &a;
    int b = 9;
    int* ptrb = &b;

    cout<<"Sum of a and b is "<<(*ptra + *ptrb);
    return 0;
}
