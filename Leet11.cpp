/*
2149. Rearrange Array Elements by Sign
*/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>p(nums.size(),0);
        int oddIndex=1;
        int evenIndex=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
               // p.insert(p.begin() + evenIndex,nums[i]);
               p[evenIndex]=nums[i];
                evenIndex=evenIndex+2;
            }else{
               // p.insert(p.begin() + oddIndex,nums[i]);
               p[oddIndex]=nums[i];
                oddIndex=oddIndex+2;
            }
            
        }
        return p;
    }
};