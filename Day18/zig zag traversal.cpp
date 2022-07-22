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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*> q;
        int flag=1;
        q.push(root);
        while(!q.empty())
        {
            vector<int> level;
            int s=q.size();
            while(s--)
            {
                TreeNode* node=q.front();
                q.pop();
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                level.push_back(node->val);
            }
            
            if(flag==0)
            {
                reverse(level.begin(),level.end());
            }
            ans.push_back(level);
            flag=1-flag;
        }
        return ans;
    }
};