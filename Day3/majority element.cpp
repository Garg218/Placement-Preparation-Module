class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=floor(nums.size()/2);
        int maxi=0;
        map<int,int> mp;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>=n && mp[nums[i]]>maxi)
            {
                ans=nums[i];
                maxi=max(maxi,mp[nums[i]]);
            }
                
        }
        
        return ans;
    }
};
