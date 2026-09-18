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
    int findBottomLeftValue(TreeNode* root) {
        int maxDepth = -1;
        int bottomLeftVal = 0;
        dfs(root, 0, maxDepth, bottomLeftVal);
        return bottomLeftVal;
    }

private:
    void dfs(TreeNode* node, int depth, int& maxDepth, int& bottomLeftVal) {
        if (!node) return;

        if (depth > maxDepth) {
            maxDepth = depth;
            bottomLeftVal = node->val;
        }

        dfs(node->left, depth + 1, maxDepth, bottomLeftVal);
        dfs(node->right, depth + 1, maxDepth, bottomLeftVal);
    }
};