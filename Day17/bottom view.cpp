class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int> ans;
        map<int,int> mp;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty())
        {
            Node* node=q.front().first;
            int l=q.front().second;
            q.pop();
            mp[l]=node->data;
            if(node->left)
            q.push({node->left,l-1});
            if(node->right)
            q.push({node->right,l+1});
        }
        for(auto it:mp)
        ans.push_back(it.second);
        return ans;
    }
};
