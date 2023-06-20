class Solution {
public:

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r;
        for(int i=1;i<=numRows;i++)
        {
            vector<int> res;
            res.push_back(1);
            int ans=1;
          for(int j=1;j<i;j++)
        {
        ans=ans*(i-j);
        ans=ans/j;
        res.push_back(ans);
        }
        r.push_back(res);
        }
        return r;
    }
};