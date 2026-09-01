class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int q= queries.size();
        int evenSum = 0;
        for(int &x:nums){
            if(x%2==0){
                evenSum+=x;
            }
        }
        vector<int> result;
        for(int i=0;i<q;i++){
            int val = queries[i][0];
            int idx = queries[i][1];
            if(nums[idx]%2==0){
                evenSum-=nums[idx];
            }
            nums[idx]+=val;
            if(nums[idx]%2==0){
                evenSum+=nums[idx];
            }
            result.push_back(evenSum);
        }
        return result;
    }
};