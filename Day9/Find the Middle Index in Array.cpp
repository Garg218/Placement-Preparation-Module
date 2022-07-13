class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        for(auto it:nums)
            sum+=it;
        int l_s=0;
        for(int i=0;i<nums.size();i++)
        {
            if(l_s==sum-l_s-nums[i])
                return i;
            l_s+=nums[i];
        }
        
        return -1;
    }
};
