class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp;
        for(auto it: nums1)
        {
            mp[it]++;
        }
        vector<int> v;
        for(auto it:nums2)
        {
            if(mp.find(it)!=mp.end())
            {
                if(mp[it]>0)
                {
                    v.push_back(it);
                    mp[it]--;
                }
            }
        }
        
        return v;
    }
};
