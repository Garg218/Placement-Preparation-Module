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
    int ans=1;
    int find(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int lh=find(root->left);
        int rh=find(root->right);
        
        if(abs(lh-rh)>1)
            ans=0;
        
        return 1+max(lh,rh);
    }
    
    bool isBalanced(TreeNode* root) {
         find(root);
        return ans;
    }
};
