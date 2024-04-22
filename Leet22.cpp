/*
2309. Greatest English Letter in Upper and Lower Case
*/
class Solution {
public:
    int greatest(char ch, char ch1){
        int x=-1;
        int y=-1;
        int maxi=-1;
        if(ch>='a' && ch<='z'){
            x=ch-'a';

        }if(ch1>='A' && ch1<='Z'){
            y=ch1-'A';

        }if(x==y){
            maxi=max(maxi,x);

        }
        //cout<<maxi<<endl;
        return maxi;
    }
    string greatestLetter(string s) {
        int st=-1;
        string str="";
        for(int i=0;i<s.length();i++){
            char x=s[i];
            for(int j=0;j<s.length();j++){
                if(x>='a'&& x<='z' &&s[j]>='A' && s[j]<='Z'){
                    st=max(greatest(x,s[j]),st);
                }
            }
            if(st<0){
                str="";
            }
            else{
                    //cout<<st<<endl;
                    str=st+'A';
                }
        }
        return str;
        
    }
};