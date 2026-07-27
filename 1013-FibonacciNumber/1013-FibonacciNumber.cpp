// Last updated: 7/27/2026, 3:02:01 PM
class Solution {
public:
    int fib(int n) {
        if(n<=0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        return fib(n-1)+fib(n-2);
    }
};