// Last updated: 7/27/2026, 3:02:09 PM
class Solution {
    public int[] productExceptSelf(int[] nums) {
       int n= nums.length;
       int[] res= new int[n];
       int pre=1;
       for(int i=0;i<n;i++){
        res[i]=pre; 
        pre *= nums[i];  
       }

       int suff=1;
       for(int j=n-1;j>=0;j--){
        res[j] *=suff;  
        suff *=nums[j];   
        }
        return res;
}
}