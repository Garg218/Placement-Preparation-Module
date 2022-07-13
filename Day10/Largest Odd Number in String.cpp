class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int h=num.length()-1;
        while(h>=0)
        {
            int a=num[h];
            if(a%2!=0)
            {
                for(int i=0;i<=h;i++)
                    ans+=num[i];
                return ans;
            }
            else
            {
                h--;
            }
        }
        
        return ans;
    }
};
