/*
2942. Find Words Containing Character
*/

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
    vector<int>v1;
    for(int i=0;i<words.size();i++){
        string& str=words[i];
        int length=str.length();
        for(int j=0;j<length;j++){
            if(str[j]==x){
                v1.push_back(i);
                break;
            }
        }
    }
    return v1;
        
    }
};