int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int i=1,j=0;
    	int a=1;
    	int res=1;
    	while(i<n && j<n)
    	{
    	    if(arr[i]<=dep[j])
    	    {
    	        a++;
    	        i++;
    	    }
    	    
    	    else if(arr[i]>dep[j])
    	    {
    	        a--;
    	        j++;
    	    }
    	    res=max(res,a);
    	}
    	return res;
    }
