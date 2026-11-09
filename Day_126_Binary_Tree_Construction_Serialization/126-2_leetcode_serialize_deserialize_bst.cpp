/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    void preorder(TreeNode* root, string &s) {
        if (!root) return;

        s += to_string(root->val) + ",";

        preorder(root->left, s);
        preorder(root->right, s);
    }

    string serialize(TreeNode* root) {
        string s;
        preorder(root, s);
        return s;
    }

    TreeNode* build(vector<int>& nums, int &i, int low, int high) {

        if (i >= nums.size())
            return nullptr;

        if (nums[i] <= low || nums[i] >= high)
            return nullptr;

        int val = nums[i++];

        TreeNode* root = new TreeNode(val);

        root->left = build(nums, i, low, val);
        root->right = build(nums, i, val, high);

        return root;
    }

    TreeNode* deserialize(string data) {

        vector<int> nums;
        stringstream ss(data);
        string temp;

        while (getline(ss, temp, ',')) {
            if (!temp.empty())
                nums.push_back(stoi(temp));
        }

        int i = 0;

        return build(nums, i, INT_MIN, INT_MAX);
    }
};


// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;