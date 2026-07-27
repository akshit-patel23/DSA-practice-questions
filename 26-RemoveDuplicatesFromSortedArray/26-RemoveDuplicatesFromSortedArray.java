// Last updated: 7/27/2026, 3:02:43 PM
class Solution {
    public int removeDuplicates(int[] nums) {
        int k=1;
        int temp=nums[0];
        for (int i=1;i<nums.length;i++){
            if(nums[i]==temp){
                nums[i]=Integer.MAX_VALUE;
                
                
            }
            else{
                
                temp=nums[i];
                k++;
               
            }
            
        }
        Arrays.sort(nums);
        return k;
    }
}