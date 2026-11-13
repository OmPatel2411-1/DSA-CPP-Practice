
class NumArray {
    vector<int> seg;
    int n;

    void build(int ind, int low, int high, vector<int>& nums) {
        if (low == high) {
            seg[ind] = nums[low];
            return;
        }

        int mid = (low + high) / 2;

        build(2 * ind + 1, low, mid, nums);
        build(2 * ind + 2, mid + 1, high, nums);

        seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
    }

    void updateTree(int ind, int low, int high,
                    int pos, int val) {
        if (low == high) {
            seg[ind] = val;
            return;
        }

        int mid = (low + high) / 2;

        if (pos <= mid)
            updateTree(2 * ind + 1, low, mid, pos, val);
        else
            updateTree(2 * ind + 2, mid + 1, high, pos, val);

        seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
    }

    int query(int ind, int low, int high, int l, int r) {
        if (low >= l && high <= r)
            return seg[ind];
        
        if (high < l || low > r)
            return 0;

        int mid = (low + high) / 2;

        int leftSum = query(2 * ind + 1, low, mid, l, r);
        int rightSum = query(2 * ind + 2, mid + 1, high, l, r);

        return leftSum + rightSum;
    }

public:
    NumArray(vector<int>& nums) {
        n = nums.size();
        seg.resize(4 * n);

        if (n > 0)
            build(0, 0, n - 1, nums);
    }

    void update(int index, int val) {
        updateTree(0, 0, n - 1, index, val);
    }

    int sumRange(int left, int right) {
        return query(0, 0, n - 1, left, right);
    }
};


/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */