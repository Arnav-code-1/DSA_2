class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int element;
        for(int i=0;i<nums.size();i++)
        {
            if(cnt==0)
            {
                element =nums[i];
            }
            if(element==nums[i])
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        //above we found the element who has the highest frequency
        for(int i=0;i<nums.size();i++)
        {
            if(element==nums[i])
            cnt++;
            if(cnt>(nums.size()/2))
            return element;
        }
        return -1;
    }
};