// Last updated: 7/27/2026, 3:02:33 PM
class Solution {
    public int maxSubArray(int[] nums) {
        int currsum=0;
        int maxsum=Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++){
            currsum+=nums[i];

            if(currsum>maxsum){
                maxsum=currsum;
            }

            if(currsum<0){
                currsum=0;
            }
        }
        return maxsum;
    }
}