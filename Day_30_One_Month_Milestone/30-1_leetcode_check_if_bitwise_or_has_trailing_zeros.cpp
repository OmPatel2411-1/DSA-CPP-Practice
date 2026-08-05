class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int evenCount = 0;

        for (int x : nums) {
            if (x % 2 == 0)
                evenCount++;
        }

        return evenCount >= 2;
    }
};