class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int m = nums.size();

        for(int i=0; i<m; i++){
            int n = target - nums[i];

            if (mp.find(n) != mp.end()){
                return {mp[n],i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};