/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mp;
        for(int i=0;i<preorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        return build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
    }
    
    TreeNode* build(vector<int>& preorder,int prestart,int preend,vector<int> &inorder,int instart,int inend,map<int,int>& mp)
    {
        if(prestart>preend || instart>inend)
            return NULL;
        
        TreeNode* root= new TreeNode(preorder[prestart]);
        
        int inroot=mp[root->val];
        int nums=inroot-instart;
        root->left=build(preorder,prestart+1,prestart+nums,inorder,instart,inroot-1,mp);
        root->right=build(preorder,prestart+nums+1,preend,inorder,inroot+1,inend,mp);
        return root;
        
    }
};
