// Last updated: 7/27/2026, 3:02:28 PM
class Solution {
public:
    bool isPalindrome(string s) {
        string alphas="";
        for(auto& x:s){
            if(isalnum(x)){
                x=tolower(x);
                alphas+=x;
            }
        }
        int i=0;
        int j=alphas.size()-1;
        while(i<=j){
            if(alphas[i]==alphas[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};