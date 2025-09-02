// Q: Craete a function that calculates the value of a raised to power b using recursion
#include <iostream>
using namespace std;

int power(int a, int b){
    if(b==0) return 1;
    return a* power(a, b-1);
}

int main(){
    int a, b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<power(a,b);
}