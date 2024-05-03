/*
1637. Widest Vertical Area Between Two Points Containing No Points
*/

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>v;
        int c=0;
       
        for(int i=0;i<points.size();i++){
            v.push_back(points[i][0]);

        }
        sort(v.begin(), v.end());
        for(int i=1;i<v.size();i++){
            int x=v[i]-v[i-1];
            c=max(c,x);

        }
        return c;
        
    }
};