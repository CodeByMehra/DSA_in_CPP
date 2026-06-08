#include <iostream>
using namespace std;
int main(){

    // char str[5] = {'a','b','c','d','e'};   

    string str = "Vishol"; 
    cout<<str<<endl;
    str[4] = 'a';  //single character cna be updated in strings, means it is mutable in C++
    cout<<str;

    string s; 
    // cin>>s; - can take input without spaces, 
    getline(cin,s); // to take input along with space
    cout<<s;  



    return 0;
}