class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(),position.end());
        int low =1;
        int high = position[n-1] - position[0];
        int result =0;
        while(low<=high){
            int guess = (low+high)/2;
            if(fun(position,n,m,guess)){
                result =guess;
                low =guess+1;
            }
            else{
                high =guess-1;
            }
        }return result;
        
    }
    bool fun(vector<int>& position,int n, int m, int guess){
        int balls =1;
        int prevposition = position[0];
        for(int i=1;i<n;i++){
            int distance = position[i] - prevposition;
            if(distance<guess){
                continue;
            }
            balls++;
            prevposition = position[i];
        }
        if(balls >= m){
            return true;
        }
        else{
            return false;
        }
    }
};