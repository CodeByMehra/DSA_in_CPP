#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                swap(arr[i], arr[count]);
                count++;
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> arr = {0, 1, 0, 3, 12};

    cout << "Before: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    sol.pushZerosToEnd(arr);

    cout << "After: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
