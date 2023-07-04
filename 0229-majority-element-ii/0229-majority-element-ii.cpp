class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         int cnt1=0;
         int cnt2=0;
         int ele1=INT_MIN;
         int ele2=INT_MIN;
         for(int i=0;i<nums.size();i++)
         {
             if(cnt1==0 && nums[i]!=ele2)
             {
                 ele1=nums[i];
                 cnt1=1;
             }
             else if(cnt2==0 && nums[i]!=ele1)
             {
                 ele2=nums[i];
                 cnt2=1;
             }
             else if(ele1==nums[i])
             {
                 cnt1++;
             }
             else if(ele2==nums[i])
             {
                 cnt2++;
             }
             else{
                 cnt1--;
                 cnt2--;
             }
         }
         vector<int> v;
         int cn1=0,cn2=0;
         for(int i=0;i<nums.size();i++)
         {
             if(ele1==nums[i])
             cn1++;
             if(ele2==nums[i])
             cn2++;
         }
         if(cn1>(nums.size()/3))
         v.push_back(ele1);
         if(cn2>(nums.size()/3))
         v.push_back(ele2);
         return v;
    }
};