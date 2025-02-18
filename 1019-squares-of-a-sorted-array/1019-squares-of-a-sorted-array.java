class Solution {
    public int[] sortedSquares(int[] nums) {
      int n=nums.length;
        int[] s=new int[n];
        int l=0,r=n-1,i=0;
        while(l<=r)
        {
            if(Math.abs(nums[l])>Math.abs(nums[r]))
            {
                    s[i]=nums[l]*nums[l];
                    i++;
                    l++;
            }
            else
            {
                s[i]=nums[r]*nums[r];
                i++;
                r--;
            }
        }

        Arrays.sort(s);

        return s;
    }
}