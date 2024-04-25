/*
Partitioning Into Minimum Number Of Deci-Binary Numbers
*/
class Solution {
public:
    int minPartitions(string n) {
        int maxi=0;
        for(auto s:n){
            int x=s-'0';
            maxi=max(maxi,x);
        }
        return maxi;
        
    }
};