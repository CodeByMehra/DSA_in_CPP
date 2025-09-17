// //Tree Post order traversal [145]-
// class Solution {
// public:
//     void postorder(TreeNode* root, vector<int>& ans) {
//         if (root == NULL) return;  // base case
//         postorder(root->left, ans);  // left
//         postorder(root->right, ans); // right
//         ans.push_back(root->val); // root
//     }

//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         postorder(root, ans);
//         return ans;
//     }
// };
