class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int res = 0;

        for (int i=0; i<n; i++){

            if (nums[i] == k){
                count++;
            }    
            res = nums[i];        

            for (int j=i+1; j<n; j++){
                res = res + nums[j];

                if (res == k){
                    count++;
                }

            }
        }
        return count;
    }
};