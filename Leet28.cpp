/*
1769. Minimum Number of Operations to Move All Balls to Each Box
*/
class Solution {
public:
    vector<int> minOperations(string boxes) {
	int len=boxes.size();
	vector<int> minOps(len,0);
	for(int i=0; i<len; i++)
		for(int j=0; j<len; j++)
			if(boxes[j]=='1')
				minOps[i]+=abs(i-j);
	return minOps;
}
};