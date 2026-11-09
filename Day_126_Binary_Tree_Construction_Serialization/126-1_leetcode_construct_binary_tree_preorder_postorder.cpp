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
    unordered_map<int, int> mp;

    TreeNode* solve(vector<int>& preorder, vector<int>& postorder, int& preIdx, int l, int r) {

        if (preIdx >= preorder.size() || l > r)
            return nullptr;

        TreeNode* root = new TreeNode(preorder[preIdx++]);

        if (l == r)
            return root;

        int leftRoot = preorder[preIdx];

        int pos = mp[leftRoot];

        root->left = solve(preorder, postorder, preIdx, l, pos);

        root->right = solve(preorder, postorder, preIdx, pos + 1, r - 1);

        return root;
    }

    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {

        int n = preorder.size();

        for (int i = 0; i < n; i++)
            mp[postorder[i]] = i;

        int preIdx = 0;

        return solve(preorder, postorder, preIdx, 0, n - 1);
    }
};
