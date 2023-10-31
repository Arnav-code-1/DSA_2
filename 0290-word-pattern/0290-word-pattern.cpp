class Solution {
public:
    bool wordPattern(string p, string s) {
        map<char,int>mp1;
        map<string ,int>mp2;
        int n=s.size(),m=p.size();
        //int j=0;
        int i=0,j=0;
        int k=1,k2=1;
        vector<int>v,v2;
        while(i<n and j<m){
            string w;
            while(i<n and s[i]!=' ')w+=s[i++];
            i++;
            if(mp1[p[j]]==0)v.push_back(k),mp1[p[j]]=k++;
            else v.push_back(mp1[p[j]]);
             if(mp2[w]==0)v2.push_back(k2),mp2[w]=k2++;
            else v2.push_back(mp2[w]);
         j++;
        }
        if(j<m or i<n)return false;
        if(v==v2)
        return true;
        return false;
    }
};