class Solution {
public:
//Binary Search used
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int col=matrix[0].size();
        int total=rows*col;
        int s=0;
        int e=total-1;
        int mid=s+(e-s)/2;
        while(s<=e)
        {
            int elementrow=mid/col;
            int elementcol=mid%col;
            if(matrix[elementrow][elementcol]==target)
            return true;
            if(matrix[elementrow][elementcol]>target)
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return false;
    }
};