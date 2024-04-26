/*
2785. Sort Vowels in a String
*/
class Solution {
public:
    vector<char> sortedVowel(string &s){
        vector<char>v;
      for(int i =0;i<s.length();i++){
        if(s[i]=='E' || s[i]=='e' || s[i]=='A'||s[i]=='a'||s[i]=='i'||s[i]=='I'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'){
            v.push_back(s[i]);
            
        }
        
    }
    sort(v.begin(),v.end());
    return v;

    }
    string sortVowels(string s) {
        int j=0;
        vector<char>v1;
        v1=sortedVowel(s);
        for(int i =0;i<s.length();i++){
        if(s[i]=='E' || s[i]=='e' || s[i]=='A'||s[i]=='a'||s[i]=='i'||s[i]=='I'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'){
            s[i]=v1[j];
            j++;     
        }
        
    }
    return s;
        
    }
};