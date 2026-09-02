class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int p = INT_MAX;
        int q = INT_MAX;
        
        for(int &x:nums){
            if(x<=p){
                p = x;
            }
            else if(x<=q){
                q = x;
            }
            else{
                return true;
            }

        }return false;
    }
};