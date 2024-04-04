/*
1672. Richest Customer Wealth
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int x=0;
        for(int i=0;i<accounts.size();i++){
            int c=0;
            for(int j=0;j<accounts[i].size();j++){
                c=c+(accounts[i][j]);
                 x=max(x,c);
                 
            }
        }
        return x;
        
    }
};