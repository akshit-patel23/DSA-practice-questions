// Last updated: 7/27/2026, 3:01:54 PM
class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        for(auto x:address){
            if(x=='.'){
                ans.push_back('[');
                ans.push_back(x);
                ans.push_back(']');
            }
            else{
                ans.push_back(x);
            }
        }
        return ans;
    }
};