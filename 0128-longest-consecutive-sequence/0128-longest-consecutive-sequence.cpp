class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int maxi = 1;

        if ( nums.empty()){
            return 0;
        }

        set<int> v(nums.begin(),nums.end());
        nums.assign(v.begin(), v.end());

        for (int i=0; i<n-1; i++){
            if (nums[i]+1 == nums[i+1]){
                count++;
            }
            else 
                count = 1;
            maxi = max (maxi,count);
        }
        return maxi;
    }
};