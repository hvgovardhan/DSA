class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mp(nums.begin(), nums.end());
        return mp.size() != nums.size();
    }
};