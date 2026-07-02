class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int n =nums.length;
        int low = 0,high =0;
        int sum = 0;
        int minlength = Integer.MAX_VALUE;//worst case:minlength should be lesser than infinity
        while(high<n){
           sum = sum+nums[high];//window expand
           while(sum>=target){
            minlength = Math.min(minlength,high-low+1);
            sum-=nums[low];//window shrink
            low++;
           }
           high++;
            
        }return (minlength==Integer.MAX_VALUE)?0:minlength;
    }
}