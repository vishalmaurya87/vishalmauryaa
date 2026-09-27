class Solution {
public:
    int maxVowels(string s, int k) {
        int n =s.length();
        int count =0;
        int maxv =0;
        int i=0,j=0;
        auto isVowel = [&](char c){
            return c == 'a' || c=='e' || c == 'i' || c == 'o' || c == 'u';
        };
        while(j<n){
            if(isVowel(s[j])){
                count++;
            }
            if(j-i+1 == k){
                maxv = max(maxv,count);
                if(isVowel(s[i])){
                    count--;
                    
                }
                i++;
            }
            j++;
        }
        return maxv;
        
    }
};