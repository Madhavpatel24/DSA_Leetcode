class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int diff = target - nums[i];
            auto it = find(nums.begin() + i + 1, nums.end(), diff); // search only after the current index
            if (it != nums.end()) {  // check if diff is found
                int s = it - nums.begin();  // convert iterator to index
                ans.push_back(i);
                ans.push_back(s);
                return ans;
            }
        }
        return ans;  // Return an empty vector if no solution is found
    }
};