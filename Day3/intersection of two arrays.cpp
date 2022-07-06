class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        map<int,int> mp;
        vector<int> v;
        for(auto it:nums1)
        {
            mp.insert({it,1});
        }
        
        for(auto it:nums2)
        {
            if(mp.find(it)!=mp.end())
            {
                if(mp[it]==0)
                    continue;
                else
                {
                    v.push_back(it);
                    mp[it]=0;
                }
            }
        }
        
        return v;
    }
};
