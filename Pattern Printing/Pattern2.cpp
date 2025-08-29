#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows = ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// OUTPUT: 
// Enter the number of rows = 5 
// *****
// ****
// ***
// **
// *

// Logic= the addition of no of starts and the number of that raw is always equal to the n+1
//         And the stars are equal to n+1 - i