class Solution {
public:

    vector<int> sortedvec(vector<int>& nums)
    {
        vector<int>nums4(nums.size());
        nums4=nums;
        sort(nums4.begin(),nums4.end());
        return nums4;
    }

    bool check(vector<int>& nums) {
        vector<int> nums2(nums.size());
        vector<int> newnums=sortedvec(nums);
        if(newnums==nums)
        return true;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                nums2[(j+1)%nums.size()]=newnums[j];
            }
            if(nums2==nums)
            return true;

            newnums=nums2;
        }
        return false;
    }
};