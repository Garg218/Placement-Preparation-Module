class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=prices[0];
        int profit=0;
        int p;
        for(int i=1;i<prices.size();i++)
        {
            p= prices[i]-m;
            profit=max(profit,p);
            m=min(m,prices[i]);
            
        }
        
        return profit;
    }
};
