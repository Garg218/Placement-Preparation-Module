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
    void create(TreeNode* &root,int val)
    {
            if(!root)
              return;
       
            if(root->val>val && root->left==NULL)
                root->left = new TreeNode(val);
            else if(root->val<val && root->right==NULL)
                root->right= new TreeNode(val);
            else if(root->val>val)
                create(root->left,val);
            else if(root->val<val)
                create(root->right,val);
        
    }
    TreeNode * bstFromPreorder(vector<int>& preorder) {
        TreeNode* root= new TreeNode(preorder[0]);
         for(int i=1;i<preorder.size();i++)
        {
           create(root,preorder[i]);
         }
       return root;
        
    }
};
