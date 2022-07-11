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
    void find(vector<int>&ans,TreeNode* node,int c)
    {
        if(node==NULL)
            return;
        if(ans.size()==c){
           ans.push_back(node->val);
         
        }
        if(node->right)
            find(ans,node->right,c+1);
        if(node->left)
             find(ans,node->left,c+1);
        
        
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
       
        find(ans,root,0);
    
        return ans;
    }
};
