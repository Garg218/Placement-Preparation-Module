class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      // brute-force 
//         int n=nums.size();
//         vector<int> freq(n,0);
//         for(int i=0;i<n;i++)
//         {
//             if(freq[nums[i]]==0)
//                 freq[nums[i]]++;
//             else
//                 return nums[i];
//         }
        
//         return 0;
        
        int s=nums[0];
        int f=nums[0];
        int slow=nums[s];
        int fast=nums[nums[f]];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        
        fast=nums[0];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        
        return slow;
    }
};
