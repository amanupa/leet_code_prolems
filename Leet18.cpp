/*
1047. Remove All Adjacent Duplicates In String
*/

class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        int n=s.length();
        while(i<n){
            if(s[i]== s[i+1]){
                s.erase(s.begin()+i+1);
                s.erase(s.begin()+i);
                n=s.length();
                i=0;
            }else{
                i++;
            }
        }
        return s;
        
    }
};