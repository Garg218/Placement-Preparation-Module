
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0)
        return ;
        for(int i=0;i<m;i++)
        {
            if(nums1[i]>nums2[0])
                swap(nums1[i],nums2[0]);
            
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n-i-1;j++)
                {
                    if(nums2[j]>nums2[j+1])
                        swap(nums2[j],nums2[j+1]);
                }
            }
        }
        int j=0;
        
        for(int i=m;i<m+n;i++)
        {
            nums1[i]=nums2[j++];
        }
    }
};
