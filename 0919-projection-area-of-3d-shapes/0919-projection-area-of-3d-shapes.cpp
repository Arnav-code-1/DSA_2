class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            if(grid[i][j])
            ans++;
        }
        for(int i=0;i<n;i++)
        {
            int row=INT_MIN;
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]>row)
                row=grid[i][j];
            }
            ans+=row;
        }
        for(int j=0;j<m;j++)
        {
            int col=INT_MIN;
            for(int i=0;i<n;i++)
            if(grid[i][j]>col)
            col=grid[i][j];
            ans+=col;
        }
        return ans;
    }
};