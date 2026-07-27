// Last updated: 7/27/2026, 3:02:42 PM
class Solution {
    public void nextPermutation(int[] nums) {
    
      int n=nums.length;
      int index=-1;
      
      for(int i=n-1;i>0;i--){
        if(nums[i-1]<nums[i]){
            index=i-1;
            break;
        }
      }
      
      if(index==-1){
        reverse(nums,0,n-1);
        return;
      }

      for(int j=n-1;j>index;j--){
        if(nums[j]>nums[index]){
            int temp= nums[j];
            nums[j]=nums[index];
            nums[index]=temp;
            break;
        }
      }

      reverse(nums,index+1,n-1);
       
    }

    public void reverse (int [] nums,int left, int right){
        while(left<right){
            int temp=nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            left++;
            right--;
        }
    }
}