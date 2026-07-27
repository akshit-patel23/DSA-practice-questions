// Last updated: 7/27/2026, 3:01:58 PM
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i=0;
        int inc=0;
        int dec=0;
        while(i<nums.size()-1){
            if(nums[i]<= nums[i+1]){
                inc++;
            }
            if(nums[i]>=nums[i+1]){
                dec++;
            }
            i++;
        }
        if(inc == nums.size()-1 || dec== nums.size()-1){
            return true;
        }
        return false;
    }
};