class Solution {
    public boolean isHappy(int n) {
        int slow = n;
        int fast = n;
         while(fast!=1){
            slow = fun(slow);
            fast = fun(fun(fast));
            // slow == fast ka mtlbb loop detected and now the number can never become to 1 or fast ya slow!= 1 ka mtlbb slow or fast 1 p na mile
            if(slow == fast && fast!=1){
                return false;
            }

         }return true;
    }

    private int fun(int n){
        int sum  = 0;
        while(n>0){
            int d = n%10;
            n = n/10;
            sum = sum+ d*d;
        }
        return sum;
    }
}