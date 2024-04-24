/*
942. DI String Match
*/
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int i=s.length();
        vector<int>v1;

        int j=0;
        for(auto k:s){
            if(k=='D'){
                v1.push_back(i);
                i--;
            }if(k=='I'){
                v1.push_back(j);
                j++;
            }

        }v1.push_back(i);
        return v1;
        
    }
};