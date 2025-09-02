// Using recursion, vreate a function that returns the n'th number from the fibonacci series
#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n==1 || n==2) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    // 1 1 2 3 5 8 13 21 .......
    cout<<fibonacci(4);
}