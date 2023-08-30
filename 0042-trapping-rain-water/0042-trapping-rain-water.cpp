class Solution {
public:
    int trap(vector<int>& height) {
         vector<int> leftar;
         vector<int> rightar;
         int maxl=0;
         int maxr=0;
         for(int i=0;i<height.size();i++)
         {
             maxl=max(height[i],maxl);
             leftar.push_back(maxl);
         }
         for(int j=height.size()-1;j>=0;j--)
         {
             maxr=max(height[j],maxr);
             rightar.insert(rightar.begin(),maxr);
         }
        //  reverse(rightar.begin(),rightar.end());
        int minq=0;
        int res=0;
        for(int k=0;k<height.size();k++)
        {
            minq=min(leftar[k],rightar[k]);
            res+=minq-height[k];
        }
        return res;
         }
};