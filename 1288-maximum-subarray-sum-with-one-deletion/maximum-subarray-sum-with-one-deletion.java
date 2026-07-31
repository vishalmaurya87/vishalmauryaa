class Solution {
    public int maximumSum(int[] arr) {
        int nodelete = arr[0];
        int onedelete = Integer.MIN_VALUE;
        int res = arr[0];
        for(int i = 1;i<arr.length;i++){
            int prevnodelete = nodelete;
            int prevonedelete = onedelete;
            nodelete  = Math.max(arr[i],nodelete+arr[i]);
            int v1;
            if(prevonedelete == Integer.MIN_VALUE){
                v1 = arr[i];
            }
            else{
                v1= prevonedelete + arr[i];
            }// onedelete =0 initialize,onedelete = Math.max(nodelete, onedelete + arr[i]);
            onedelete = Math.max(v1,prevnodelete);
            res = Math.max(res,Math.max(onedelete,nodelete));
        }
        return res;
    }
}