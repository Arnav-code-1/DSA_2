class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                index =i;
                break;
            }
        }
        if(index==-1)
        {
            reverse(nums.begin(),nums.end());
            for(int i=0;i<n;i++)
            {
                cout<<nums[i];
            }
        }
        else{
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]>nums[index])
            {
                swap(nums[i],nums[index]);
                break;
            }
        }
        reverse(nums.begin()+ index+1,nums.end()); 
          for(int i=0;i<n;i++)
            {
                cout<<nums[i];
            }
        }
        // cout<<next_permutation(nums.begin(),nums.end()); // we can directly use this STL to get the next permutation
    }
};