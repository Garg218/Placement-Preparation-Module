void sortColors(vector<int>& nums) {
        // int t=0,z=0,o=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==0)
        //         z++;
        //     else if(nums[i]==1)
        //         o++;
        //     else
        //         t++;
        // }
        // int i=0;
        // while(z--)
        //     nums[i++]=0;
        // while(o--)
        //      nums[i++]=1;
        // while(t--)
        //     nums[i++]=2;
        
        
        int l=0;
        int h=nums.size()-1;
        int i=0;
        while(i<=h)
        {
            if(nums[i]==0)
                swap(nums[i++],nums[l++]);
            else if(nums[i]==1)
                i++;
            else
             swap(nums[i],nums[h--]);
        }
        
    }
