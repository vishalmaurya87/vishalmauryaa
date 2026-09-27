class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();

        unordered_map<char, int> mp;

        int low = 0, high = 0;
        int result = 0;

        while (high < n) {

            mp[s[high]]++;

            while (mp[s[high]] > 1) {
                mp[s[low]]--;
                
                if (mp[s[low]] == 0) {
                    mp.erase(s[low]);
                }

                low++;
            }

            int len = high - low + 1;
            result = max(result, len);

            high++;
        }

        return result;
    }
};