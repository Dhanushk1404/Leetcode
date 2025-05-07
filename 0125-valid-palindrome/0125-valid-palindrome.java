class Solution {
    public boolean isPalindrome(String s) {
        String x="";
        for(char t:s.toCharArray())
        {
            if(Character.isLetterOrDigit(t))
            x+=Character.toLowerCase(t);
        }
        int l=0,r=x.length()-1,c=0;
       
        while(l<=r)
        {
            if(x.charAt(l)!=x.charAt(r))
            {
                return false;
            }
            
            l++;
            r--;
        }

         return true;
        
    }
}