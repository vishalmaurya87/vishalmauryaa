class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> need;
        unordered_map<char,int> have;
        for(int i=0;i<ransomNote.size();i++){
            need[ransomNote[i]]++;
        }
        for(int k=0;k<magazine.size();k++){
            have[magazine[k]]++;
        }
        return func(have,need);
    }
    bool func(unordered_map<char,int> have,unordered_map<char,int> need){
        for(auto i:need){
            char c = i.first;
            int fneed = i.second;
            int fhave = have[c];
            if(fhave<fneed){
                return false; 
            }
        }
        return true;
    }
};