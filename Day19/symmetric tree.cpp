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
    bool find(TreeNode* nleft,TreeNode* nright)
    {
        if(nleft==NULL || nright==NULL)
            return nleft==nright;
        if(nleft->val!=nright->val)
            return false;
        
        return find(nleft->left,nright->right) && find(nleft->right,nright->left);
    }

     
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
       return find(root->left,root->right);
        
    }
};
