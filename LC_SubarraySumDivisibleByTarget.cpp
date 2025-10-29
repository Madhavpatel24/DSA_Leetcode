class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        count[0] = 1; // one prefix sum with remainder 0 initially
        
        int prefixSum = 0, result = 0;
        
        for (int num : nums) {
            prefixSum += num;
            
            // normalize remainder to always be positive
            int remainder = ((prefixSum % k) + k) % k;
            
            // if this remainder has been seen before, those subarrays are valid
            if (count.find(remainder) != count.end()) {
                result += count[remainder];
            }
            
            // store the current remainder count
            count[remainder]++;
        }
        
        return result;
    }
};