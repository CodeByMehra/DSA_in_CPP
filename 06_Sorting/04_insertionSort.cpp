#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){

    for(int i=0; i<n; i++){
        int j=i;
        while(j>=1){
            if(arr[j]>=arr[j-1]) break;
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
                j--;
            }
        }
    }
    cout<< "Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {

    int arr [] = {9, 2, 4 ,1 , 3};
 
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    return 0;
}