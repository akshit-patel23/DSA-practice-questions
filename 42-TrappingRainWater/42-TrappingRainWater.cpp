// Last updated: 7/27/2026, 3:02:36 PM
class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        
        int right=height.size()-1;
         
        int leftmax=0;
        int rightmax=0;
        int water=0;

        while(left<right){
            if(height[left]<height[right]){
                if(height[left]>leftmax){
                    leftmax=height[left];
                }
                water+=leftmax-height[left];
                left++;
            }
            else{
                if(height[right]>rightmax){
                    rightmax=height[right];
                }
                water+=rightmax-height[right];
                right--;
            }
        }
        return water;
    }
};