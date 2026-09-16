class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;
        int i = 0;
        while(i<n){
            int count =0;
            char current_char = chars[i];
            while(i<n && chars[i] == current_char){
                count++;
                i++;
            }
            //now assign
            chars[idx]=current_char;
            idx++;
            if(count>1){
                string count_str = to_string(count);
                for(char &ch:count_str){
                    chars[idx] = ch;
                    idx++;
                }
            }
        }return idx;
    }
};