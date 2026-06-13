// Q: Given an array that contains the point of N different cards. you have to pick 'K' cards the cards can picked up from front or from back. obtain maximum points by picking up k cards.
// Possible choices example:

// Pick all 3 from front
// 1 + 2 + 3 = 6
// Pick 2 from front, 1 from back
// 1 + 2 + 1 = 4
// Pick 1 from front, 2 from back
// 1 + 6 + 1 = 8

#include <iostream>
using namespace std;

void maxSum(int arr[],int n, int k){

    int leftSum = 0;
    int rightSum =0;
    int maxSum = 0;

    for(int i=0; i<k ;i++){
        leftSum = leftSum + arr[i];
    }

    maxSum = leftSum;
    int curentsum=0;
    int rightIdx=n-1;
    for(int i=k-1; i>=0; i--){
        leftSum = leftSum - arr[i];
        rightSum = rightSum+ arr[rightIdx];
        curentsum = leftSum + rightSum;
        rightIdx--;
        if(curentsum>maxSum){
            maxSum = curentsum;
        }
    }


    cout<<"Maximum sum is : "<<maxSum;

}

int main(){
    int arr[] = {1,9,5,0,5,2,9,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);


    int k=2;
    maxSum(arr,n,k);
}