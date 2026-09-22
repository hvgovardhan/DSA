class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n-1;

        while(left <= right){
            int mid = left + (right-left)/2;
            if (nums[mid] == target){
                return true;
            }
            if (nums[left] <= nums[mid]){
                if (target >= nums[left] && target < nums[mid]){
                    right = right-1;
                }else
                    left = left +1;
            }else
                if (target > nums[mid] && target <= nums[right]){
                    left = left + 1;
                }else
                    right = right - 1;
        }
        return false;
    }
};