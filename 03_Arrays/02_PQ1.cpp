//Q: Given an array of marks of students, if the marks of any student is less than 35, print its roll number. [roll number here refer to the index]


#include <iostream>
using namespace std;
int main(){

    int arr[] = {90,30,32,85,34,97};

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<size; i++){
        int marks = arr[i];
        if (marks < 35){
            cout<<"Roll number "<<i<<" Has marks less than 35"<<endl;
        }
    }

    return 0;
}