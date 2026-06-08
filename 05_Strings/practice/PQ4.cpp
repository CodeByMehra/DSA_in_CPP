//Ques: Return the total number of digits in a number without using any loop (try using to_string() function)
#include <iostream>
using namespace std;
int main(){

    int n = 12345;  

    string str = to_string(n);
    int len=str.size();
    cout<<"Digits in the string are : "<<len;



    return 0;
}