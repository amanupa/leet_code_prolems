/*
Count Pairs Of Similar Strings
*/
class Solution {
public:
    int similarPairs(vector<string>& words) {
        int c=0;

        for(int j=0;j<words.size();j++){
        set<char>s1(words[j].begin(),words[j].end());
        for(int k=j+1;k<words.size();k++){
            set<char>s2(words[k].begin(),words[k].end());
            if(s1==s2){
                c++;
            }
        }
        
        
        }
        return c;
    }
};