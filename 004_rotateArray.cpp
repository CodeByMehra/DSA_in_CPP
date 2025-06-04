#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

void rotateArray(vector<int> &arr, int d) {
    int n = arr.size();
    d %= n;

    reverse(arr.begin(), arr.begin() + d);    
    reverse(arr.begin() + d, arr.end());      
    reverse(arr.begin(), arr.end());          
}

int main() {
    vector<int> arr = {1, 23, 32, 33, 123};
    int d = 3;

    cout << "Previous array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    rotateArray(arr, d);

    cout << "After Rotation: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
