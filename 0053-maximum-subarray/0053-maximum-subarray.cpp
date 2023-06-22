class Solution {
public:
    int maxSubArray(vector<int> &nums) {
      int max1=INT_MIN;
      int res=0;
      for(int i=0;i<nums.size();i++)
      {
          res=res+nums[i];
          if(max1<res)
          {
              max1=res;
          }
          if(res<0)
          res=0;
      }
      return max1;
    }
};
