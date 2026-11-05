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
    long long totalSum = 0;
    long long ans = 0;

    long long getSum(TreeNode* root) {
        if (!root) return 0;

        return root->val +
               getSum(root->left) +
               getSum(root->right);
    }

    long long dfs(TreeNode* root) {
        if (!root) return 0;

        long long sum = root->val + dfs(root->left) + dfs(root->right);

        ans = max(ans, sum * (totalSum - sum));

        return sum;
    }

    int maxProduct(TreeNode* root) {
        totalSum = getSum(root);

        dfs(root);

        return ans % 1000000007;
    }
};