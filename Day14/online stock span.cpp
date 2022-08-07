class StockSpanner {
public:
    stack<pair<int,int>> st;
    vector<int> index;
    vector<int> v;
    int k=0;
    
    StockSpanner() {
        
    }
    void find(int price,int k)
    {
        while(!st.empty() && st.top().first<=price)
            st.pop();
        if(st.empty())
            index.push_back(-1);
        else
        {
            index.push_back(st.top().second);
        }
        st.push({price,k});
    }
    int next(int price) {
        find(price,k);
        int val=k-index[k];
        k++;
        return val;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
