void find(Node* root,vector<int> &ans,int c)
{
    if(root==NULL)
    return ;
    if(ans.size()==c)
    ans.push_back(root->data);
    if(root->left)
    find(root->left,ans,c+1);
    if(root->right)
    find(root->right,ans,c+1);
}
//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
    find(root,ans,0);
    return ans;
}
