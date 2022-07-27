class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans=nullptr;
        if(root==NULL)
            return ans;
        if(root->val==val)
            return root;
        else if(root->val>val)
            ans=searchBST(root->left,val);
        else
            ans=searchBST(root->right,val);
        
        return ans;
    }
};
