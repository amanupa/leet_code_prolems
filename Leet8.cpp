/*
75. Sort Colors
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(auto it=nums.begin();it!=nums.end();it++){
            for(auto i=it+1;i!=nums.end();i++){
                if(*it<*i){
                    swap(*it,*i);
                }
            }

        }
        reverse(nums.begin(),nums.end());
        
    }
};