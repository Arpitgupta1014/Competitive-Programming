class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m=INT_MIN,curr=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]<=curr+nums[i]) curr+=nums[i];
            else curr=nums[i];
            m=max(curr,m);
        }
        return m;
    }
};