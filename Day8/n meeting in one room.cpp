struct meeting{
        int s;
        int e;
        int p;
    };
    
    bool static comparator(struct meeting m1,meeting m2)
    {
        if(m1.e<m2.e)
        return true;
        else if(m1.e>m2.e)
        return false;
        else if(m1.p<m2.p)
        return true;
        
        return false;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        struct meeting m[n];
        for(int i=0;i<n;i++)
        {
            m[i].s=start[i];
            m[i].e=end[i];
            m[i].p=i+1;
        }
        
        sort(m,m+n,comparator);
        int limit=m[0].e;
        int ans=1;
        for(int i=1;i<n;i++)
        {
            if(m[i].s>limit)
            {
                ans++;
                limit=m[i].e;
            }
        }
        
        return ans;
        
    }
