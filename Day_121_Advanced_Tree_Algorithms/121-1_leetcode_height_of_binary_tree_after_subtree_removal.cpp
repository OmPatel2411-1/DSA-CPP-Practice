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
    vector<int> height, ans;

    int dfs1(TreeNode* root, int depth) {
        if (!root) return -1;

        height[root->val] = max(
            dfs1(root->left, depth + 1),
            dfs1(root->right, depth + 1)
        ) + 1;

        return height[root->val];
    }

    void dfs2(TreeNode* root, int depth, int maxHeight) {
        if (!root) return;

        ans[root->val] = maxHeight;

        int leftHeight = root->left ?
            height[root->left->val] : -1;

        int rightHeight = root->right ?
            height[root->right->val] : -1;

        if (root->left) {
            dfs2(root->left, depth + 1,
                 max(maxHeight, depth + rightHeight + 1));
        }

        if (root->right) {
            dfs2(root->right, depth + 1,
                 max(maxHeight, depth + leftHeight + 1));
        }
    }

    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        height.resize(100001, 0);
        ans.resize(100001, 0);

        dfs1(root, 0);
        dfs2(root, 0, 0);

        vector<int> result;

        for (int q : queries) {
            result.push_back(ans[q]);
        }

        return result;
    }
};