//Q: Calculate the sum of all the elements in the given array

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter value of "<<n<<" Elements"<<endl;
        cin>>arr[i];
        };

    int sum=0;
        for(int i=0; i<n; i++){
            sum= sum+ arr[i];
        }
    cout<<"Sum : "<<sum;
    return 0;
}