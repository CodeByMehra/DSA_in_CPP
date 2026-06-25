#include <iostream>
#include <climits>
using namespace std;

void selectionSort(int arr[], int n){

    // loop to check min
    for(int i=0; i<n; i++){
        int min = INT_MAX;
        int minIdx;
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min= arr[j];
                minIdx= j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    cout<< "Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {

    int arr [] = {9, 2, 4 ,1 , 3};
 
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    return 0;
}