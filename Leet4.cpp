/*
1684. Count the Number of Consistent Strings (allmost take my 3 and half hour but at the end i did it (02:48 am))
*/
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) { 
        int x=0;
        for(int i=0;i<words.size();i++){
            int c=0;
           string &str=words[i];
           for(int j=0;j<str.length();j++){ 
            for(int k=0;k<allowed.length();k++){
                if(str[j]==allowed[k]){
                   c=0;
                    break;
                }else{
                    c=c+1;
                }
            }
                    if(c==allowed.length()){
                        c=1;
                        break;
                    }
           }
           if(c>=1 ){
                x=x+1;

             }
        }
        int y=(words.size()-x);
        return y;
 
    }
};