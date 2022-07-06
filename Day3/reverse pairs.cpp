class Solution {
public:
    // int reversePairs(vector<int>& nums) {
    //     int c=0;
    //     for(int i=0;i<nums.size()-1;i++)
    //     {
    //         for(int j=i+1;j<nums.size();j++)
    //         {
    //             if(nums[i]>(2L*nums[j]))
    //                 c++;
    //         }
    //     }
    //     return c;
    // }
    
    int merge(vector<int> &nums,int l,int m,int h)
    {
        int x=0;
        int j=m+1;
        for(int i=l;i<=m;i++)
        {
            while(j<=h && nums[i]>2LL *nums[j])
                j++;
            
            x+=(j-(m+1));
        }
        
        vector<int> v;
        int a=l;
        int b=m+1;
        while(a<=m && b<=h)
        {
            if(nums[a]>nums[b])
                v.push_back(nums[b++]);
            else
                v.push_back(nums[a++]);
        }
        
        while(a<=m)
        {
            v.push_back(nums[a++]);
        }
        while(b<=h)
            v.push_back(nums[b++]);
        
        for(int i=l;i<=h;i++)
            nums[i]=v[i-l];
        
        return x;
        
    
    }
    int mergesort(vector<int> &nums,int l,int h)
    {
        if(l>=h)
            return 0;
        int m=(l+h)/2;
        int c=mergesort(nums,l,m);
        c+=mergesort(nums,m+1,h);
        c+=merge(nums,l,m,h);
        
        return c;
    }
    int reversePairs(vector<int>& nums){
        int n=nums.size();
        return mergesort(nums,0,n-1);
        
    }
};
