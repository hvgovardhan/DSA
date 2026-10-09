class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> arr;

        for (int x : nums1) {
            mp[x]++;
        }

        for (int x : nums2){
            if (mp.find(x) != mp.end() && mp.find(x)->second > 0){  
                arr.push_back(x);
                mp[x]--;
            }
        }
        return arr;
    }
};