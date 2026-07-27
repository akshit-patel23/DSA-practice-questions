// Last updated: 7/27/2026, 3:02:57 PM
class Solution {
public:
    int reverse(int x) {
        int revint=0;
        while(x!=0){
            int dig=x%10;
            if(revint>(INT_MAX/10) || revint<(INT_MIN/10)){
             return 0;
            }
            else{
                revint=(revint*10)+dig;
                x=x/10;
            }
            
        }
       
        return revint;
    }
};