class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(),position.end());
        int low =1;
        int high = position[n-1] - position[0];
        int result =0;
        while(low<=high){
            int dist = (low+high)/2;
            if(fun(position,n,m,dist)){
                result =dist;
                low =dist+1;
            }
            else{
                high =dist-1;
            }
        }return result;
        
    }
    bool fun(vector<int>& position,int n, int m, int dist){
        int balls =1;
        int prevposition = position[0];
        for(int i=1;i<n;i++){
            int distance = position[i] - prevposition;
            if(distance<dist){
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