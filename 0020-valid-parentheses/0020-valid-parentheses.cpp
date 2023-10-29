class Solution {
public:
bool valid(char a,char b)
{
    if((a=='(' && b==')')|| (a=='{' && b=='}') || (a=='[' && b==']'))
    return true;
    else
    return false;
}
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                return false;
                else if(!(valid(st.top(),s[i])))
                return false;
                else
                st.pop();
            }
        }
        if(st.empty())
        return true;
        else 
        return false;
    }
};