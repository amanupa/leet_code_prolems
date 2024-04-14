/*
2798. Number of Employees Who Met the Target
*/
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int  c=0;
        vector<int>::iterator it;
       for(it=hours.begin();it!=hours.end();it++){
            if(*it>=target){
                c=c+1;
            }
        }

        return c;
        
    }
};