#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int right = arr.size() - 1;
        int left = 0;

        while (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    sol.reverseArray(arr);

    cout << "Reversed array is : ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
