class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int &x:nums){
            mp[x]++;
        }
        int j=0;
        while(j<n){
            if(mp[nums[j]] > 1){
                return true;
            }
            j++;
        }
        return false;
    }
};