class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=0;
        int sum=nums[0];
        for(int i : nums){
            ans = ans + i;
            sum = max(ans,sum);
            if(ans<0)
            {
                ans = 0 ;
            }
        }
        return sum;
    }
};