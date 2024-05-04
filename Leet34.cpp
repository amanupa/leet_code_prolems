/*
1389. Create Target Array in the Given Order
*/
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>v1;

        for(int i=0;i<nums.size();i++){
            v1.insert(v1.begin()+index[i],nums[i]);
        }
        return v1;
        A
    }
};