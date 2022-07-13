class Solution {
public:
    int minTimeToType(string word) {
        int ans=0;
        char ch='a';
        for(int i=0;i<word.length();i++)
        {
            int d=abs(word[i]-ch);
            ch=word[i];
            if(d>13)
                d=26-d;
            ans+=d+1;
            
        }
        
        return ans;
    }
};
