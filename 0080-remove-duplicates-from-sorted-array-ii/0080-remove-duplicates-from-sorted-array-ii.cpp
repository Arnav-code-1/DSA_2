class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int count=0;
        int i=0,j=0;
        int n=nums.size();
        while(j<n)
        {
            nums[i]=nums[j];
            i++;j++;
            count++;
            if(count<2 && j<n && nums[j]!=nums[j-1])
            {
                count=0;
            }

            else if(count==2){
                while(j<n && nums[j]==nums[j-1])j++;

            count=0;
            }
        }
       return i; 
    }
};