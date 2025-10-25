class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1; // Two-pointer approach
        int maxArea = 0; // Variable to store the maximum area found
        
        while (left < right) {
            int h = min(height[left], height[right]); // Height is determined by the shorter line
            int w = right - left; // Width is the distance between the two lines
            maxArea = max(maxArea, h * w); // Update maxArea if we found a larger area
            
            // Move the shorter line inward
            if (height[left] < height[right]) {
                left++; // Move left pointer to the right
            } else {
                right--; // Move right pointer to the left
            }
        }
        
        return maxArea;
    }
};