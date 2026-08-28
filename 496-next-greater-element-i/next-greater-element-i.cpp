class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        vector<int> res(nums1.size());
        stack<int> st;
        unordered_map<int,int> map;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums2[i]>=st.top()){
                st.pop();
            }
            if(st.empty()){
                map[nums2[i]] = -1;
            }
            else{
                map[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
            
        }
      
        for(int i=0;i<nums1.size();i++){
            res[i] =map[nums1[i]];
        }
        return res;
    }
};