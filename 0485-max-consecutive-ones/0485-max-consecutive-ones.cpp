class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max2=0;
        int cnt=0;
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
            cnt++;
            max2=max(cnt,max2);
            }
            else
            {
                cnt=0;
            }
        }
        return max2;
    }
};