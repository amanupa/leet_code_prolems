/*
3110. Score of a String
*/
class Solution {
public:
    int asciiValue(char c, char c1){
        int x=c-'a';
        int y=c1-'a';
        return abs(x-y);

    }
    int scoreOfString(string s) {
        int c=0;
        int x=0;
        for(int i=1;i<s.length();i++){
            c=asciiValue(s[i], s[i-1]);
            x=x+c;
        }

        return x;
    }
};