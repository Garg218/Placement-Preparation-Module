class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
        int deno[]={1,2,5,10,20,50,100,200,500,2000};
        vector<int> ans;
        for(int i=9;i>=0;i--)
        {
            while(N>=deno[i])
            {
                ans.push_back(deno[i]);
                N=N-deno[i];
            }
        }
        
        return ans;
    }
};
