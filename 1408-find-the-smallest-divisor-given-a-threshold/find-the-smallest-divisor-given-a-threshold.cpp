class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low =1;
        int high = *max_element(nums.begin(),nums.end());
        int result =-1;
        while(low<=high){
            int guess = (low+high)/2;
            int min_divisor = fun(nums,n,guess);
            if(min_divisor > threshold){
                low = guess+1;
            }
            else{
                result = guess;
                high = guess-1;
            }
        }return result;
    }
    int fun(vector<int>& nums,int n,int guess){
        int divisor = 0;
        for(int i=0;i<n;i++){
            divisor = divisor +nums[i] /guess;
            if(nums[i] % guess != 0){
                divisor++;
            }
        }
        return divisor;
    }
};