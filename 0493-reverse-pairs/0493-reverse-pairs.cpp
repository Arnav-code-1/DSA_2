class Solution {
public:
    void merge(vector<int>& nums1,int low,int mid,int high)
    {
        vector<int> temp;
        int left=low;
        int right=mid+1;
        int cnt=0;
        while(left<=mid && right<=high)
        {
            if(nums1[left]>nums1[right])
            {
                temp.push_back(nums1[right]);
                right++;
            }
            else
            {
                temp.push_back(nums1[left]);
                left++;
            }
        }
        while(left<=mid)
        {
            temp.push_back(nums1[left]);
            left++;
        }
        while(right<=high)
        {
            temp.push_back(nums1[right]);
            right++;
        }
        for(int i=low;i<=high;i++)
        {
            nums1[i]=temp[i-low];
        }
    }
    int countpairs(vector<int>& nums1,int low,int mid,int high)
    {
        int r=mid+1;
        int cnt=0;
        for(int i=low;i<=mid;i++)
        {
            while(r<=high && (long long)nums1[i]>2LL*nums1[r])
            {
                r++;
            }
            cnt=cnt+(r-(mid+1));
        }
        return cnt;
    }
    int mergeS(vector<int>& nums1,int low,int high)
    {
        int cnt=0;
        if(low>=high)
        {
            return cnt;
        }
        int mid=low+(high-low)/2;
        cnt+=mergeS(nums1,low,mid);
        cnt+=mergeS(nums1,mid+1,high);
        cnt+=countpairs(nums1,low,mid,high);
        merge(nums1,low,mid,high);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        return mergeS(nums,0,nums.size()-1);
    }
};