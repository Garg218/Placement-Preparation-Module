class Solution {
public:
    
    Node* connect(Node* root) {
        if(root==NULL)
            return root;
        Node* node=root;
        queue<Node*> q;
        q.push(node);
        while(!q.empty())
        {
            int s=q.size();
            vector<Node*> level;
            while(s--)
            {
                Node* f=q.front();
                q.pop();
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
                
                level.push_back(f);
            }
            
            int n=level.size();
            int i;
            for(i=0;i<n-1;i++)
            {
                level[i]->next=level[i+1];
            }
            level[i]->next=NULL;
        }
        
        return root;
    }
};
