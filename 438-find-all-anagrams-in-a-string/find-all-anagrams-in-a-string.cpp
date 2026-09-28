class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.length();
        int k = p.length();
        vector<int> patfreq(26,0);
        vector<int> stringfreq(26,0);
        for(char c:p){
            patfreq[c-'a']++;
        }
        int i=0,j=0;
        while(j<n){
            stringfreq[s[j] -'a']++;
            if(j-i+1 == k){
                if(patfreq == stringfreq){
                ans.push_back(i);
                }
                stringfreq[s[i] -'a']--;
                i++;
            }
            j++;
        }
        return ans;
    }
};