class Solution {
public:
    int atmost(vector<int>& nums, int k){
        int n = nums.size();
        unordered_map<int,int> mp;
        int low=0;
        int result = 0;
        for(int high=0;high<n;high++){
            mp[nums[high]]++;
            while(mp.size() > k){
                mp[nums[low]]--;
                if(mp[nums[low]] == 0){
                    mp.erase(nums[low]);
                }
                low++;
            }
            int len = high-low+1;
            result = result + len;
        }
        return result;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k) - atmost(nums,k-1);
    }
};