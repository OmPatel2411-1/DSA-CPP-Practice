/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0;

    struct Node {
        bool isBST;
        int sum;
        int minVal;
        int maxVal;
    };

    Node dfs(TreeNode* root) {
        if (!root) {
            return {true, 0, INT_MAX, INT_MIN};
        }

        Node left = dfs(root->left);
        Node right = dfs(root->right);

        if (left.isBST && right.isBST &&
            root->val > left.maxVal &&
            root->val < right.minVal) {

            int sum = left.sum + right.sum + root->val;

            ans = max(ans, sum);

            return {
                true,
                sum,
                min(root->val, left.minVal),
                max(root->val, right.maxVal)
            };
        }

        return {false, 0, 0, 0};
    }

    int maxSumBST(TreeNode* root) {
        ans = 0;
        dfs(root);
        return ans;
    }
};