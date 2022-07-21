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
    int find(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int lh=find(root->left);
        int rh=find(root->right);
        return 1+max(lh,rh);
    }
    
    int maxDepth(TreeNode* root) {
        
        int height=find(root);
        return height;
    }
};
