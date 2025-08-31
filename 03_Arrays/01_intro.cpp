//Array: it can be deined as a type of data structure that consist a collection of similiar data types

#include <iostream>
using namespace std;

int main() {
    // Declare an array of integers
    int arr[5];

    //checking size of array
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"Size : "<<size<<endl;

    //taking input using loop
    for (int i=0; i<5; i++){
        cin>>arr[i];
    }
    //Output using loop
    for (int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}