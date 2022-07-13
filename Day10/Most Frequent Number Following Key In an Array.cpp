class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        vector<int> v;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==key)
                v.push_back(i);
        }
        map<int,int> mp;
        int ans=0;
        int maxi=INT_MIN;
        for(auto it:v)
        {
            int n=nums[it+1];
            mp[n]++;
            if(mp[n]>maxi)
            {
                maxi=mp[n];
                ans=n;
            }
        }
        return ans;
        
        
        
        
        
    }
};
