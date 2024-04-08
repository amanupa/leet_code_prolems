/*
169. Majority Element
*/

// solution 1
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x=0;
        int y=0;
        map<int,int>m;
        for(int f:nums){
            m[f]++;
        }
        for(const auto& pair:m){
            if(pair.second>x){
                x=pair.second;
            }
        }
        for(const auto& pair:m){
            if(pair.second==x){
                y=pair.first;
            }
        }
        return y;
    }
};

//solution 2
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x=1;
        int y=0;
        int j=0;
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            j=nums[0];
        }else{
             for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                x=x+1;
                if(x>y){
                    j=nums[i];
                }
                y=max(x,y);
               // j=nums[i];
            }else{
                x=1;
            }

        }

        }
       

        return j;
    }
};