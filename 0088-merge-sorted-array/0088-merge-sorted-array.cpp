class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int insertIndex = m + n - 1; // Index to insert elements in nums1

        int i = m - 1; // Index for elements in nums1
        int j = n - 1; // Index for elements in nums2

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[insertIndex--] = nums1[i--];
            } else {
                nums1[insertIndex--] = nums2[j--];
            }
        }
        // If there are remaining elements in nums1, insert them into nums1
        while(i>=0)
        {
            nums1[insertIndex]=nums1[i];
            insertIndex--;
            i--;
        }
        // If there are remaining elements in nums2, insert them into nums1
        while (j >= 0) {
            nums1[insertIndex--] = nums2[j--];
        }
    }
};