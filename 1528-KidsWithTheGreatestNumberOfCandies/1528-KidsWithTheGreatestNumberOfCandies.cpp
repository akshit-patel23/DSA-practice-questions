// Last updated: 7/27/2026, 3:01:49 PM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        for(int i=0;i<candies.size();i++){
            int exkid=candies[i]+extraCandies;
            int count=0;
            for(int j=0;j<candies.size();j++){
               if(candies[j]<=exkid){
                   count++;
               }
               else{
                   break;
               }
            }
            if(count==candies.size()){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};