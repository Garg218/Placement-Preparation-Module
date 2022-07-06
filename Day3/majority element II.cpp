class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {      
        int n=nums.size();
        int n1=0,n2=0,c1=0,c2=0;
        
        for(auto it:nums)
        {
            if(it==n1)
                c1++;
            else if(it==n2)
                c2++;
            else if(c1==0)
            {
                n1=it;
                c1++;
            }
            else if(c2==0)
            {
                n2=it;
                c2++;
            }
            else
            {
                c1--;
                c2--;
            }
        }
         c1=0;
        c2=0;
        for(auto it:nums)
        {
            if(it==n1)
                c1++;
            else if(it==n2)
                c2++;
        }
        vector<int> ans;
        if(c1>floor(n/3))
            ans.push_back(n1);
        if(c2>floor(n/3))
            ans.push_back(n2);
        
        return ans;
    }
        
};
