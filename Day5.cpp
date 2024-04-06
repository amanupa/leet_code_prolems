/*
283. Move Zeroes
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(auto it:nums){
            if(nums[j]==0){
                nums.push_back(0);
                nums.erase(nums.begin()+j);
            }else{
                j++;
            }
        }
   
    }
};
