class Solution {
public:
    TreeNode* find(vector<int> nums,int l,int h)
    {
        if(l>h)
            return nullptr;
        if(l<0 || h>nums.size()-1)
            return nullptr;
        int mid=(l+h)/2;
        TreeNode* root= new TreeNode(nums[mid]);
        root->left=find(nums,l,mid-1);
        root->right=find(nums,mid+1,h);
        return root;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       
        
       return find(nums,0,nums.size()-1);
        
    }
};
