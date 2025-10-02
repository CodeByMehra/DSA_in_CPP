//AIM: Write a program to implement binary search. 
#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int index = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            index = mid;
            end = mid - 1;  // keep searching in left half
        }
        else if (arr[mid] > key) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return index;
}

int lastOcc(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int index = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            index = mid;
            start = mid + 1;  // keep searching in right half
        }
        else if (arr[mid] > key) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return index;
}

int main() {
    int n, key;
    int arr[100];

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the array elements (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key element: ";
    cin >> key;

    int fp = firstOcc(arr, n, key);
    int lp = lastOcc(arr, n, key);

    if (fp == -1 || lp == -1) {
        cout << "Key not found!" << endl;
    }
    else {
        int count = lp - fp + 1;
        cout << "The total count of the key is " << count << endl;

        for (int j = fp; j <= lp; j++) {
            cout << "The key position is " << (j + 1) << endl;
        }
    }

    cout << "gourav garg and 2023078033" << endl;

    return 0;
}
