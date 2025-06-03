#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        if (n < 2) return -1;
        
        int first = INT_MIN;
        int second = INT_MIN;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] > first) {
                second = first;
                first = arr[i];
            } else if (arr[i] > second && arr[i] != first) {
                second = arr[i];
            }
        }

        if (second == INT_MIN) return -1;
        return second;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << "Second largest: " << sol.getSecondLargest(arr) << endl;
    return 0;
}
