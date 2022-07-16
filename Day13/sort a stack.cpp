#include<bits/stdc++.h>
void sortStack(stack<int> &st)
{
	// Write your code here
    priority_queue<int,vector<int>,greater<int>> q;
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    while(!q.empty())
    {
        st.push(q.top());
        q.pop();
    }
}
