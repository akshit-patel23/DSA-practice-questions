// Last updated: 7/27/2026, 3:01:55 PM
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        int comp=0;
        int weight=0;
        while(n!=0){
          int bit=n&1;
          if(bit==0){
            comp+=pow(2,weight);
          }
          weight++;
          n=n>>1;
        }
        return comp;
    }
};