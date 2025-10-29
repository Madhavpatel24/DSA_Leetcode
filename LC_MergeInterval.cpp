class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Step 1: Sort intervals by start time
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

        vector<vector<int>> merged;

        // Step 2: Merge overlapping intervals
        for (auto& interval : intervals) {
            // if merged is empty or current interval doesn't overlap, add it
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            } 
            // else there is overlap, so merge
            else {
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }

        return merged;
    }
};