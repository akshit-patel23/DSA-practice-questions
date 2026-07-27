// Last updated: 7/27/2026, 3:01:21 PM
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
          int ans=0;
          for(int i=0;i<hours.size();i++){
              if(hours[i]>=target)
                  ans++;
          }
        return ans;   
    }
};