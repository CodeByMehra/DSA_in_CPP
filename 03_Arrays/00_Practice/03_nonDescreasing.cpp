// Problem Statement:
// You are given an array. Determine whether the array is non-decreasing.
// Meaning of Non-Decreasing:
// Every element should be:

// Greater than the previous element, OR
// Equal to the previous element
// Example 
// [1, 2, 2, 4, 5]

// Check:

// 2 >= 1 ✓
// 2 >= 2 ✓
// 4 >= 2 ✓
// 5 >= 4 ✓

// Output:

// True

#include <iostream>
using namespace std;

void nonDecreasing(int arr[], int size){

    for(int i=0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
        cout<<"false";
        return;
    }
    }cout<<"True";
}

int main(){

    int arr[]={1,2,3,3,9,4,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    nonDecreasing(arr,size);
    return 0;
}