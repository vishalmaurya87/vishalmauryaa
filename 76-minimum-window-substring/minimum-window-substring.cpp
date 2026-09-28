class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        int count = t.length();
        unordered_map<char,int> mp;
        if(count > n) return "";
        for(char c:t){
            mp[c]++;
        }
        int minsizewindow = INT_MAX;
        int i=0;
        int start_i = 0;
        for(int j=0;j<n;j++){
            if(mp[s[j]] > 0){
                count--;     
            }
            mp[s[j]]--;
            while(count == 0){
                int currentwindow = j-i+1;
                if(currentwindow < minsizewindow){
                    minsizewindow = currentwindow;
                    start_i = i;
                }
                mp[s[i]]++;
                if(mp[s[i]] > 0){
                    count++;
                }
                i++;
            }
        }
        if(minsizewindow == INT_MAX) return "";
        else return s.substr(start_i,minsizewindow);
    }
};