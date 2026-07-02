class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        //return indices
        List<Integer> ans = new ArrayList<>();
        int[] patfreq = new int[26];
        int[] winfreq = new int[26];
        int n = s.length();
        int k = p.length();
        if(n<k){
            return ans;
        }
        for(int i =0;i<k;i++){
            patfreq[p.charAt(i)-97]++;
            winfreq[s.charAt(i)-97]++;
        }
        if(Arrays.equals(patfreq,winfreq)){
             ans.add(0);
        }
        for(int i = k;i<n;i++){
            winfreq[s.charAt(i)-97]++;
            winfreq[s.charAt(i-k)-97]--;
            if(Arrays.equals(patfreq,winfreq)){
              ans.add(i-k+1);
            }
            
        
    }return ans;
    }
}