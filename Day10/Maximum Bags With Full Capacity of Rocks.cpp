class Solution {
public:
    
    int maximumBags(vector<int>& c, vector<int>& r, int ar) {
        int n=c.size();
        int count=0;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            if(c[i]==r[i])
                count++;
            else
            {
                v.push_back(c[i]-r[i]);
            }
        }
        sort(v.begin(),v.end());
        for(auto it:v)
        {
            if(it<=ar)
            {
                count++;
                ar=ar-it;
            }
            else
                break;
        }
        
        return count;
    }
};
