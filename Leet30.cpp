/*
Convert an Array Into a 2D Array With Conditions
*/
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>v1;
        
        
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int y=mp.size();
        int maxCount = 0;
       
    for (const auto& pair : mp) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
        }
    }
  
    
        for(int i=0;i<maxCount;i++){ //3
            vector<int>v;
            for(auto &it:mp){
                if(it.second>0){
                    cout<<it.first<<it.second<<endl;
                    v.push_back(it.first);
                    it.second--;  
                    cout<<it.first<<it.second<<endl;
                }
                
            }
            v1.push_back(v);
            v.clear();
            

        }
        return v1;
        
    }
};