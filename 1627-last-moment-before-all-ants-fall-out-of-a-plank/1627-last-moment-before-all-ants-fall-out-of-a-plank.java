class Solution {
    public int getLastMoment(int n, int[] left, int[] right) {
        int maxr=0;
        int maxl=0;
        for(int pos:left)
        {
            maxl=Math.max(maxl,pos);
        }
        for(int pos:right)
        {
            maxr=Math.max(maxr,n-pos);
        }
        return Math.max(maxl,maxr);
        
    }
}