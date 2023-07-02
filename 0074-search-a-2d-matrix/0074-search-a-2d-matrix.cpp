class Solution {
public:
//Binary Search used
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int row=matrix.size();
         for(int i=0;i<row;i++)
         {
             int s=0;
             int e=matrix[i].size()-1;
             int mid=s+(e-s)/2;
             while(s<=e)
             {
                 if(matrix[i][mid]==target)
                 {
                     return true;
                 }
                 if(matrix[i][mid]>target)
                 {
                     e=mid-1;
                 }
                 else
                 {
                     s=mid+1;
                 }
                 mid=s+(e-s)/2;
             }
         }
         return false;
    }
};