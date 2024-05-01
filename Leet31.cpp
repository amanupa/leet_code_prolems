/*
1409. Queries on a Permutation With Key
*/
class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int>p(m);
        vector<int>v;
        iota(p.begin(), p.end(), 1);
        for(int i=0;i<queries.size();i++){
            auto it=find(p.begin(), p.end(),queries[i]);
            int index = distance(p.begin(), it);
            v.push_back(index);
             p.erase(it);
             p.insert(p.begin(), queries[i]);
        }
        return v;
    }
};