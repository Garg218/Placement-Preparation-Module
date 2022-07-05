
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	vector<int> v(n+1,0);
    for(int i=0;i<n;i++)
    {
        v[arr[i]]++;
    }
    pair<int,int> p;
    for(int i=1;i<=n;i++)
    {
        if(v[i]==0)
        {
            p.first=i;
            break;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i]>1)
        {
            p.second=i;
            break;
        }
        
    }
    return p;
}
