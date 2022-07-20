class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('|| s[i]=='{'|| s[i]=='[')
                st.push(s[i]);
            
            else
            {
                if(st.empty())
                {
                  return false;
                }
                else
                {
                    if(s[i]==')' && st.top()=='(')
                        st.pop();
                    else if(s[i]==']' && st.top()=='[')
                        st.pop();
                    else if(s[i]=='}' && st.top()=='{')
                        st.pop();
                    else
                        st.push(s[i]);
                }
            }   
        }
        if(st.empty())
            return true;
        
        return false;
        
    }
};