/*
Find The Original Array of Prefix Xor
*/
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>org=pref;
        if(pref.size()<=1) return pref;
        for(int i=1;i<pref.size();i++){
            org[i]=(pref[i] ^ pref[i-1]);

        }
        return org;
        
    }
};