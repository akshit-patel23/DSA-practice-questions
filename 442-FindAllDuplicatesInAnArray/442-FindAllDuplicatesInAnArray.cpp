// Last updated: 7/27/2026, 3:02:00 PM
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       unordered_map<int , int> freq;
       for(int i=0;i<nums.size();i++){
         freq[nums[i]]++;
       }
       vector<int> ans;

       for(auto x:freq){
        if(x.second>1){
            ans.push_back(x.first);
        }
       }
    return ans;
    }
};