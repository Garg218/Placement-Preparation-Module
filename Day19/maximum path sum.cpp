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
    int find(TreeNode* root,int &m)
    {
        if(root==NULL)
            return 0;
       int lh = max(0,find(root->left,m));
       int rh = max(0,find(root->right,m));
        m=max(m,lh+rh+root->val);
        return root->val+max(lh,rh);
    }
    int maxPathSum(TreeNode* root) {
        int m=INT_MIN;
        find(root,m);
        return m;
        
        
    }
};
