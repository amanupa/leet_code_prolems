/*
128. Longest Consecutive Sequence
*/

//Two solutions 1. using set (time taken 169 ms) 2.> without set simple vector (time taken 64 ms)

//1. using set
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int maxi=0;
        int c=1;
        set<int>s;
        for(auto i:nums){
            s.insert(i);
        }
        int prev = *s.begin();
       
        if(s.size()<1){
            return maxi;
        }else{
            c=1;
            maxi=1;
            for(auto num:s){
                if(i==0){
                    ++i;
                    continue;
                }else{
                    int diff=num-prev;
                    
                    if(diff==1){
                        c=c+1;
                        maxi=max(c,maxi);
                    }else{
                        c=1;

                    }
                    
                    
                }
                prev=num;
                    ++i;
            }

        }
        
        return maxi;
        
    }
};

//2 solution simple vector 
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int maxi=1;
        int c=1;
        if(nums.size()<1){
            return maxi=0;
        }else{
            for(int i=1;i<nums.size();i++){
                if(nums[i]!=nums[i-1]){
                    if(nums[i]-nums[i-1]==1){
                c=c+1;
                maxi=max(c,maxi);
            }else{
                c=1;
            }
                } 
        }
        }

        return maxi;
        
    }
};