class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        unordered_map<int,int> mp;

        for(auto x : nums1){
            mp[x]++;
        }

        for (auto x : nums2){
            if (mp.find(x) != mp.end()){
                return x;
            }
        }
        return -1;
    }
};