class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
            if(nums[j]>nums[j+1])
            swap(nums[j],nums[j+1]);
        }
        }
        for(int j=0;j<nums.size();j++)
        {
            cout<<nums[j];
        }
    }
};