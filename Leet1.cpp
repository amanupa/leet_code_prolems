// 2535. Difference Between Element Sum and Digit Sum of an Array (leetcode problem)


class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
       // vector<pair<int, int>v_p;
        vector<int>v1;
        int c=0;
        int d=0;
        for(int value :nums){
            c=c+value;
             for(int n=value;n>0;n=n/10){
            int x=n%10;
            v1.push_back(x);
        }
     }
        for(int v:v1){
             d=d+(v);
        }
        return abs(c-d);
    }
};