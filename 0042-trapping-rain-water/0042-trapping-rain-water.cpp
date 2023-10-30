class Solution {
public:
    int trap(vector<int>& height) {
    int maxi=0;
    int arr2[height.size()];
    for(int i=0;i<height.size();i++)
    {
        maxi=max(maxi,height[i]);
        arr2[i]=maxi;
    }
    int arr3[height.size()];
    int maxi2=0;
    for(int i=height.size()-1;i>0;i--)
    {
        maxi2=max(maxi2,height[i]);
        arr3[i]=maxi2;    
    }
    int min1=0;
    int sum=0;
    for(int i=1;i<height.size();i++)
    {
            min1=min(arr2[i],arr3[i]);
            sum=sum+(min1-height[i]);
    }
    return sum;
    }
};