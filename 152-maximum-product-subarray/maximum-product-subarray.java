class Solution {
    public int maxProduct(int[] nums) {
        int minending = nums[0];
        int maxending = nums[0];
        int result = nums[0];
        for(int i = 1;i<nums.length;i++){
            int v1 = nums[i];
            int v2 = nums[i]*minending;
            int v3 = nums[i]*maxending;
            maxending = Math.max(v1,Math.max(v2,v3));
            minending = Math.min(v1,Math.min(v2,v3));
            result = Math.max(result,Math.max(minending,maxending)); 
        }
        return result;
    }
}