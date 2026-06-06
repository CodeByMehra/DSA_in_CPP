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
#include <vector>
using namespace std;

void rotateByK(vector <int> arr,int k){

    vector <int> rotatedArr;

    for(int i=arr.size()-k; i<arr.size(); i++){
       rotatedArr.push_back(arr[i]);
    }

    for(int i=0; i<arr.size()-k; i++){
       rotatedArr.push_back(arr[i]);
    }

    for (int i=0; i<rotatedArr.size(); i++){
        cout<<rotatedArr[i]<<" ";
    }
}

int main(){

    vector <int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);

    rotateByK(arr, 2);

    return 0;
}