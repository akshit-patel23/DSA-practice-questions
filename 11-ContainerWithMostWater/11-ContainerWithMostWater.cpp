// Last updated: 7/27/2026, 3:02:49 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int left=0;
        int right=height.size()-1;
        while(left<right){
           int y=min(height[left],height[right]);
           int x=right-left;
           int area= x*y;
           maxarea=max(area,maxarea);
           if(height[left]<height[right]){
               left++;
           }
           else{
               right--;
           }
        }
    return maxarea;
    }
};