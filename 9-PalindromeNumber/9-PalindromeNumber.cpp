// Last updated: 7/27/2026, 3:02:51 PM
class Solution {
public:
    bool isPalindrome(int x) {
        long revx=0;
        int num=x;
        while(num!=0){
            int dig=num%10;
            revx=revx*10+dig;
            num/=10;
        }
        if(revx==x && x>=0){
            return true;
        }
        return false;
    }
};