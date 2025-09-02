// When a function call itself then it is known as recursion

//Q: Printing heyy coder n number o times by taking n as input from the user
#include <iostream>
using namespace std;

void greet(int n){
    if(n==0) return;
    cout<<"Hello Coder"<<endl;
    greet(n-1);
};

int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;

    greet(n);
    return 0;
}