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
    bool find(TreeNode* p,TreeNode* q)
    {
        if(p==NULL && q==NULL)
            return true;
        if(p==NULL || q==NULL)
            return false;
        
        if(p->val!=q->val)
            return false;
        bool l=find(p->left,q->left);
        bool r=find(p->right,q->right);
        
        return l&r;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return find(p,q);
    }
};
