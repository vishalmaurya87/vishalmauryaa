class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n = matches.size();
        unordered_map<int,int> f;
        for(int i =0;i<n;i++){
            int loser = matches[i][1];
            f[loser]++;
        }
        vector<int> notlost;
        vector<int> lostonce;
        for(int i=0;i<n;i++){
            int winner = matches[i][0];
            int loser = matches[i][1];
            if(f.find(winner) == f.end()){
                notlost.push_back(winner);
                f[winner] = 2;
            }
            if(f[loser] ==1){
                lostonce.push_back(loser);
            }
        }
        sort(notlost.begin(),notlost.end());
        sort(lostonce.begin(),lostonce.end());
        return {notlost,lostonce};

    }
};