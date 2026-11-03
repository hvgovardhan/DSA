class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int steps = 0;

        int mn = *min_element(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            steps += nums[i] - mn;
        }

        return steps;
    }
};