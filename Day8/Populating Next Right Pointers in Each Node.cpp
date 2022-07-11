/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

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
