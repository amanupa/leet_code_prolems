/*
268. Missing Number
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int x=(n*(n+1))/2;
        int c=0;
        for(auto v:nums){
            c=c+v;
        }

        return x-c;
    }
};