// You are given an array and an integer K. Your task is to rotate the array by K positions.
// Depending on the question, the rotation may be:

// Left Rotation → Elements shift towards the left.
// Right Rotation → Elements shift towards the right.

// After reaching the end, elements wrap around to the other side of the array.

// Example : Right Rotation
// Array:
// [1, 2, 3, 4, 5]
// K = 2
// After rotating right by 2 positions:
// [4, 5, 1, 2, 3]

#include <iostream>
using namespace std;

void display(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<< " ";
    }
}

void rotateByK(int arr[], int size, int k)
{
   int j=size-1;
   int temp;
   for(int i=0; i<k; i++){
        temp=arr[i];
        arr[i] = arr[j];
        arr[j]=temp;

   }
   display(arr, size);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    rotateByK(arr, size, k);

    return 0;
}