class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        double profit=0;
        int cur=0;
        sort(arr,arr+n,comparator);
        
        for(int i=0;i<n;i++)
        {
            if(cur+arr[i].weight<=W)
            {
                cur+=arr[i].weight;
                profit+=arr[i].value;
            }
            else
            {
                int rem=W-cur;
                profit+=((double)arr[i].value/(double)arr[i].weight)*(double)rem;
                break;
            }
        }
        
        return profit;
        
        
    }
        
};
