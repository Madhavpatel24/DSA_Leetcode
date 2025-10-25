class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=0; // Initialize current sum to 0
        int maxsum=INT_MIN; // Initialize max sum to the smallest integer
        for(int val:nums)
        {
           currsum+=val; // Add the current element to current sum
           maxsum= max(currsum,maxsum); // Update max sum if current sum is greater
           if(currsum<0)
           {
            currsum=0; // Reset current sum to 0 if it becomes negative
           } 
        }
        return maxsum;
    }
};