class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        st.reserve(nums.size());

        for (int x : nums)
            if (!st.insert(x).second)
                return true;

        return false;
    }
};