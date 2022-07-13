class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long int sum=0;
        for(auto it:nums)
            sum+=it;
                                           
        long int s=0;
        int count=0;
        for(int i=0;i<nums.size()-1;i++)
        {a
            s+=nums[i];
            
            if(s>=sum-s)
                count++;
        }
        
        return count;
    }
};
