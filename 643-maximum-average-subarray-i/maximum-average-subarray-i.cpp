class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int low=0;
        int high = k;
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double maxavg = sum / k;
        while(high<n){
            sum = sum-nums[low]+nums[high];
            double avg = sum/k;
            maxavg = max(avg,maxavg);
            low++;
            high++;
        }
        return maxavg;
    }
};