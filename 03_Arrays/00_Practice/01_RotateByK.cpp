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

void rotateByK(int arr[], int size)
{
    
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    rotateByK(arr, size);

    return 0;
}