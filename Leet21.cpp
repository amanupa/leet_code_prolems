/*
709. To Lower Case
*/
class Solution {
public:
    char toLowerCase(char c){
        if(c>='a' && c<='z'){
            return c;
        }else if(c>='A' && c<= 'Z'){
            char temp=c-'A'+'a';
            return temp;
        }else{
            return c;
        }
    }

    string toLowerCase(string s) {
        string str;
        for(auto ch:s){
            str=str+toLowerCase(ch);
        }
        return str;
    }
};