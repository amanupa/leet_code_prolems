/*
125. Valid Palindrome
*/

class Solution {
public:
bool isLetterOrDigit(char ch) {
        return isalnum(ch);
    }
char toLowerCase(char ch){
            if(ch>='A' && ch <='Z'){
                return ch;
            }else{
                char temp=ch-'a' + 'A';
                return temp;
            }
        }
    bool isPalindrome(string s) {
        int n=s.length();
        
        int k=0;
        char chr[n];
        for(int j=0;j<n;j++){
            if (isLetterOrDigit(s[j])) {
                chr[k] = toLowerCase(s[j]);
                k++;
            }
           /* if(toLowerCase(s[j])>='A' && toLowerCase(s[j])<='Z'){
                chr[k]=toLowerCase(s[j]);
                k++;
            }*/

        }
        for(int l=0;l<k;l++){
            cout<<chr[l]<<endl;
        }
        cout<<k<<endl;
        int i=0;
        int e=k-1;
        if(k<=1){
            return 1;
        }else{
            while(i<=e){
                
                if(chr[i]!=chr[e]){
                    return 0;
                }else{
                    i++;
                    e--;
                }
            }

        }
          
        return 1;
        
    }
};