// //Binary tree preorder traversal [144]
// class Solution {
// public:
//     void preorder(TreeNode* root, vector<int>& ans) {
//         if (root == NULL) return;  // base case
//         ans.push_back(root->val); // root
//         preorder(root->left, ans);  // left
//         preorder(root->right, ans); // right
//     }

//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         preorder(root, ans);
//         return ans;
//     }
// };
