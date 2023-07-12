class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int max1=INT_MIN;
        int flag=0;
        int cnt=1;
        if(nums.empty())
        return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1]) continue;
                if(nums[i]+1==nums[i+1])
                {
                    flag=1;
                cnt++;
                }
                else
                {
                    flag=1;
                cnt=1;
                }
                max1=max(max1,cnt);
        }
        if(flag==0)
        return cnt;
        else
        return max1;
    }
};