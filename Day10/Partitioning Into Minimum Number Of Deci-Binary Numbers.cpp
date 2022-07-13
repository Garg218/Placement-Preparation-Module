class Solution {
public:
    int minPartitions(string n) {
      int maxi=-1;
        for(int i=0;i<n.length();i++)
        {
           int a=n[i]-'0';
            if(maxi<a)
                maxi=a;
        }
        
        return maxi;
    }
};


