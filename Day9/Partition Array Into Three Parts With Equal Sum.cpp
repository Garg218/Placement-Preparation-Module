class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=accumulate(arr.begin(),arr.end(),0);
        
            
        if(sum%3!=0)
            return false;
        
        int s=sum/3;
        int a=0;
        int c=0;
        for(int i=0;i<arr.size();i++)
        {a
            a+=arr[i];
            if(a==s)
            {
                a=0;
                c++;
                if(c==3)
                  return true;
            }
        }
        
        
        
        return false;
    }
};
