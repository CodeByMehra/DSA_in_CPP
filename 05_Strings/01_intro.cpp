#include <iostream>
using namespace std;
int main(){

    // char str[5] = {'a','b','c','d','e'};   

    string str = "Vishal"; 
    cout<<str[0];

    string s; 
    // cin>>s; - can take input without spaces, 
    getline(cin,s); // to take input along with space
    cout<<s;  

    return 0;
}