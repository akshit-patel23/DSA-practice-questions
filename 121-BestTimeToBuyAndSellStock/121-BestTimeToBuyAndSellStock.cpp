// Last updated: 7/27/2026, 3:02:31 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int minprice=INT_MAX;
        int maxprofit=0;
        int profit;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minprice)
                minprice=prices[i];

            profit=prices[i]-minprice;
            if(profit>maxprofit)
                maxprofit=profit;
        }
        return maxprofit;
    }
};