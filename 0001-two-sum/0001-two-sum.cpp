class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        map<int,int> Map;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i];
            int more=target-a;
            map<int,int>:: iterator it=Map.find(more);
            if(it !=Map.end())
            {
                v.push_back(i);
                v.push_back(it->second);
                break;
            }
            Map[a]=i;
        }
        return v;
    }
};