class Solution {
    public int maxAbsoluteSum(int[] nums) {
        int maxending = nums[0];
        int minending = nums[0];
        int maxSum = nums[0];
        int minSum = nums[0];

        for(int i = 1;i<nums.length;i++){
            maxending = Math.max(nums[i],maxending+nums[i]);
            maxSum = Math.max(maxSum,maxending);

            minending = Math.min(nums[i],minending+nums[i]);
            minSum = Math.min(minSum,minending);
        }
        return Math.max(maxSum, Math.abs(minSum));
    }
}