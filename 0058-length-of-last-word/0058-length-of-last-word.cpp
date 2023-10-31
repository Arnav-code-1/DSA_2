class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
        bool t=false;
        for(int i=s.length()-1;i>=0;i--)
        {
            if((s[i]==' ') && (t==true))
            {
               break;
            }
            if(s[i]!=' ')
            {
                t=true;
                cnt++;
            }
        }
        return cnt;

    }
};