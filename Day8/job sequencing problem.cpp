class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    bool static comparator(struct Job j1,Job j2)
    {
        return j1.profit>j2.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        
        sort(arr,arr+n,comparator);
        
        int maxi=arr[0].dead;
        for(int i=1;i<n;i++)
        {
            maxi=max(maxi,arr[i].dead);
        }
        
        vector<int> v(maxi+1,-1);
        int c=0,p=0;
        for(int i=0;i<n;i++)
        {
            for(int j=arr[i].dead;j>0;j--)
            {
                if(v[j]==-1)
                {
                    c++;
                    p+=arr[i].profit;
                    v[j]=i;
                    break;
                }
            }
        }
        vector<int> ans;
        ans.push_back(c);
        ans.push_back(p);
        return ans;
        
    } 
};
