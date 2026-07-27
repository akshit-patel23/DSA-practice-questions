// Last updated: 7/27/2026, 3:01:46 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> ans;
        for(int i=0;i<nums.size();i++){
            int runsum=nums[i];
            int j=i;
           while(j--)
               runsum+=nums[j];
               
            ans.push_back(runsum);
        }
        return ans;
    }
};