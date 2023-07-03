class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> Map;
        for(int i=0;i<nums.size();i++)
        {
            Map[nums[i]]++;
        }
        for(auto it:Map)
        {
            if(it.second>(nums.size()/2))
            return it.first;
        }
        return -1;
    }
};