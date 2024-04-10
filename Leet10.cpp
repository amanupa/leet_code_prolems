/*
Best Time to Buy and Sell Stock
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int j=0;
        int x=0;
        int maxi=0;
        for(int i=j+1;i<prices.size();i++){
            if(prices[j]<prices[i]){
                x=prices[i]-prices[j];
                maxi=max(maxi,x);
            }else{
                j=i;
            }

        }
        
        return maxi;
    }
};