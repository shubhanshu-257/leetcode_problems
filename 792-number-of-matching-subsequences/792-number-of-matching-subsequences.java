class Solution {
    public int numMatchingSubseq(String s, String[] words) {
        int cnt=0;
        HashMap<String,Integer> mp = new HashMap<>();
        for (String str:words){
            mp.put(str,mp.getOrDefault(str,0)+1);
        }
        for (String x:mp.keySet()){
            String m=x;
            int j=0;
            int k=0;
            while(j<s.length() && k<m.length()){
                if (m.charAt(k)==s.charAt(j)){
                    k++;
                    j++;
                }
                else{
                    j++;
                }
            }
            if (k==m.length()){
                cnt+=mp.get(m);
            }
        }
        return cnt;
    }
}