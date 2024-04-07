/*
136. Single Number
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a;
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0;i<nums.size();i=i+2){
            if(nums[i]!=nums[i+1]){
                 a=nums[i];
            }
        }
        return a;
     
    }
};