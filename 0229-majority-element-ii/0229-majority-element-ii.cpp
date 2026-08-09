class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int m = n/3;
        vector<int> arr;
       

        sort(nums.begin(), nums.end());

        for (int i=0; i<n; i++){
            int count = 0;
            for (int j=i; j<n; j++){
                
                if (nums[i] == nums[j]){
                    count++;
                }else{
                    break;
                }
            }
            if (count > m){
                arr.push_back(nums[i]);
            }
            i = i+count-1;
        }
        return arr;
    }
};