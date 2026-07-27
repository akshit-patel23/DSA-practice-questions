// Last updated: 7/27/2026, 3:02:07 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        if(n%2!=0||n==0){
            return false;
        }
        int temp=n/2;
        return isPowerOfTwo(temp);
    } 
};