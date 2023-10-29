class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>curr;
        vector<vector<int>>res;
        dfs(candidates,0,target,curr,res,0);
        return res;

    }
    void dfs(vector<int> & candidates,int start,int target, vector<int>&curr, vector<vector<int>> & res,int sum)
    {
        if(sum==target)
        {
            res.push_back(curr);
            return;
        }
        if(sum>target)
            {
                return;
            }
        for(int i=start;i<candidates.size();i++)
        {
            curr.push_back(candidates[i]);
            
            dfs(candidates,i,target,curr,res,sum+candidates[i]);
            curr.pop_back();
        }
    }
};