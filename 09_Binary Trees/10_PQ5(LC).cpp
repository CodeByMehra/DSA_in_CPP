// //Tree in order traversal [94]

// class Solution {
// public:
//     void inorder(TreeNode* root, vector<int>& ans) {
//         if (root == NULL) return;  // base case
//         inorder(root->left, ans);  // left
//         ans.push_back(root->val); // root
//         inorder(root->right, ans); // right
//     }

//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         inorder(root, ans);
//         return ans;
//     }
// };
