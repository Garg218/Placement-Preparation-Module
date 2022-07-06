class Solution {
public:
    // brute force (tle)
//     double myPow(double x, int n) {
//         double ans=1.0;
//         long long  nn=n;
//         if(nn<1)
//             nn=-1*nn;
//         for(int i=0;i<nn;i++)
//             ans=ans*x;
        
//         if(n<1)
//             ans=1/ans;
//         return ans;
//     }
    
    double myPow(double x ,int n)
    {
        double ans=1.0;
        long long  nn=n;
        if(nn<1)
            nn=-1*nn;
        
       while(nn)
       {
           if(nn%2==0)
           {
               x=x*x;
               nn=nn/2;;
           }
           else
           {
               ans=x*ans;
               nn=nn-1;
               
           }
       }
        if(n<1)
            ans=1.0/ans;
        return ans;
    }
};
