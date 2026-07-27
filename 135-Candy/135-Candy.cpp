// Last updated: 7/27/2026, 3:02:21 PM
class Solution {
public:
    int candy(vector<int>& ratings) {
        vector <int> candy;
        int count=0;
        for(int i=0;i<ratings.size();i++){
            candy.push_back(1);
        }

        for(int j=0;j<candy.size()-1;j++){
            if(ratings[j]>ratings[j+1]){
                if(candy[j]<=candy[j+1]){
                    candy[j]=candy[j+1]+1;
                }
            }
            else if(ratings[j+1]>ratings[j]){
                if(candy[j+1]<=candy[j]){
                    candy[j+1]=candy[j]+1;
                }
            }
        }

        for(int k=ratings.size()-1;k>0;k--){
            if(ratings[k]>ratings[k-1]){
                if(candy[k]<=candy[k-1]){
                    candy[k]=candy[k-1]+1;
                }
            }
            else if(ratings[k-1]>ratings[k]){
                if(candy[k-1]<=candy[k]){
                    candy[k-1]=candy[k]+1;
                }
            }
        }

        for(int i:candy){
            count+=i;
        }
        return count;
    }
};