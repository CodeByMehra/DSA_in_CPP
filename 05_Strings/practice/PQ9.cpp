// Q: Longest common prefix (Leetcode)
// it is solved by first sorting the given string and then comparing common starting(prefix) characters bw first and last element

// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {

//         int n = strs.size();

//         if (n == 1)
//             return strs[0];

//         sort(strs.begin(), strs.end());

//         string first = strs[0];
//         string last = strs[n - 1];

//         string s = "";

//         for (int i = 0; i < min(first.size(), last.size()); i++) {

//             if (first[i] == last[i]) {
//                 s += first[i];
//             }
//             else {
//                 return s;
//             }
//         }

//         return s;
//     }
// };