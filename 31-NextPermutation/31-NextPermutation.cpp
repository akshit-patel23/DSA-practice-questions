// Last updated: 7/27/2026, 3:02:48 PM
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i,j,pivot;
        for(i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                pivot=i-1;
                break;
            }
        }
        if(i<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            
         
            for(j=nums.size()-1;j>pivot;j--)
            {
                if(nums[j]>nums[pivot])
                {            
                int temp=nums[j];
                nums[j]=nums[pivot];
                nums[pivot]=temp;

                break;
                }
            }
            
            reverse(nums.begin()+i,nums.end());
        }



    }
};