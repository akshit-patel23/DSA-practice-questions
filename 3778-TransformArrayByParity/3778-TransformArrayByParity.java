// Last updated: 7/27/2026, 3:01:17 PM
class Solution {
    public int[] transformArray(int[] nums) {
       for(int i=0;i<nums.length;i++){
         nums[i]=nums[i]&1;
       } 
       Arrays.sort(nums);
       return nums;
    }
}