class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int s=m+n;
        for(int i=0;i<n;i++)
        {
            nums1.push_back(nums2[i]); // Merging nums2 into nums1  
        }
         sort(nums1.begin(), nums1.end()); // Sorting the merged array
                int mid = s/2; // Finding the middle index
        if(s%2==0) 
        {
            return (nums1[mid]+nums1[mid-1])/2.0; // If even, return average of two middle elements
        }
        else
        {
            return nums1[mid]; // If odd, return the middle element
        }

        
    }
};