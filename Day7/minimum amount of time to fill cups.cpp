class Solution {
public:
    int fillCups(vector<int>& a) {
        priority_queue<int> pq;
        pq.push(a[0]);
        pq.push(a[1]);
        pq.push(a[2]);
        int ans=0;
        while(pq.top()!=0)
        {
            int n1=pq.top();
            pq.pop();
            n1--;
            int n2=pq.top();
            pq.pop();
            n2--;
            ans++;
            pq.push(n1);
            pq.push(n2);
            
        }
        
        return ans;
    }
};
