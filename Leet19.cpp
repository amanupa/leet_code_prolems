/*
771. Jewels and Stones
*/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int c=0;
        for(int i=0;i<jewels.length();i++){
            for(int j=0;j<stones.length();j++){
                if(jewels[i]==stones[j]){
                    c++;
                }

            }

        }
        return c;
        
    }
};