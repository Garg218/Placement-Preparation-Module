class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        if(v.size()==0)
            return 0;
       
        sort(v.begin(),v.end());
        int maxi=INT_MIN;
        int ans=1;
     for(int i=1;i<v.size();i++)
     {
         if(v[i]==1+v[i-1])
         {ans++;
         }
         else if(v[i]==v[i-1])
             continue;
         else 
         {
             if(ans!=1){
             maxi=max(ans,maxi);
             ans=1;
             }
             
         }
     }
        maxi=max(maxi,ans);
        
        return maxi;
        
    }
};
