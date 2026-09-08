class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int result =-1;
        while(low<=high){
            int guess = (low+high)/2;
            if(nums[guess] > nums[n-1]){
                //part2(greater)
                low = guess+1;
            }
            else{
                result = guess;
                high = guess -1;
            }
        }
        return nums[result];
    }
};