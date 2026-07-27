// Last updated: 7/27/2026, 3:01:42 PM
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
           
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};