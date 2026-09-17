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
    unordered_map<long long, int> prefix;

    void dfs(TreeNode* root, long long curr, int targetSum) {
        if (!root) return;

        curr += root->val;

        if (prefix.count(curr - targetSum))
            ans += prefix[curr - targetSum];

        prefix[curr]++;

        dfs(root->left, curr, targetSum);
        dfs(root->right, curr, targetSum);

        prefix[curr]--;
    }

    int pathSum(TreeNode* root, int targetSum) {
        prefix[0] = 1;
        dfs(root, 0, targetSum);
        return ans;
    }
};
