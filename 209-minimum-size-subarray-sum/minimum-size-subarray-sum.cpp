class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n= nums.size();
        int low=0,high=0;
        int minlength = INT_MAX;
        int sum = 0;
        while(high<n){
            sum = sum+ nums[high];
            while(sum>=target){
                int length = high - low +1;
                minlength= min(minlength,length);
                sum = sum - nums[low];
                low++;
            }
            high++;
        }
        if(minlength == INT_MAX) return 0;
        else return minlength;
    }
};