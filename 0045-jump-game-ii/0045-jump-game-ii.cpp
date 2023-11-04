class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int max_R=nums[0];
        int step=nums[0];
        int jump=1;
        if(n==1) return 0;
        if(n>=1 && nums[0]==0)return -1;
        for(int i=1;i<n;i++)
        {
            //base case
            if(i==n-1)return jump;
            //update the max reachable
            max_R=max(max_R,i+nums[i]);
            step--;
            if(step==0)
            {
                jump++;
                if(i>=max_R)return -1;
                step=max_R-i;
            }
        }
        return jump;
    }
};