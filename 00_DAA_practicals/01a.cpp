// Linear search
#include<iostream> 
using namespace std; 

int main() 
{ 
    int n, arr[100], i, s, count = 0; 
    
    cout << "Enter number of elements in array: " << endl; 
    cin >> n; 
    
    cout << "Enter elements of array: " << endl; 
    for(i = 0; i < n; i++){ 
        cin >> arr[i]; 
    } 
    
    cout << "Enter element to be searched: " << endl; 
    cin >> s; 
    
    for(i = 0; i < n; i++){ 
        if(arr[i] == s){ 
            cout << "Element is found at location " << i << endl; 
            count++; 
        } 
    } 
    
    if(count == 0){ 
        cout << "Element is not found" << endl; 
    } 
    
    cout << "Vishal Mehra" << endl; 
    cout << "2023242032" << endl; 
}
