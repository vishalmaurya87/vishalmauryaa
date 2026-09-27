class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();

        int freq[256] = {0};

        int low = 0;
        int high = 0;
        int result = 0;

        while (high < n) {

            freq[s[high]]++;

            while (freq[s[high]] > 1) {
                freq[s[low]]--;
                low++;
            }

            int len = high - low + 1;
            result = max(result, len);

            high++;
        }

        return result;
    }
};