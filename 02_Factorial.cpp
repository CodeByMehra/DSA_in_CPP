#include <iostream>
using namespace std;

int factorial(int num){
    if (num<=1) return num;
    num=num*factorial(num-1);
};

int main(){
    int num;
    cout<<"Enter the number to calculate factorial : ";
    cin>>num;
    cout<<factorial(num);
}