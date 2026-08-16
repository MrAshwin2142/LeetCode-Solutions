class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        vector<int> v(3,0);
        for(int i:stones) v[i%3]++;
        if(~v[0] & 1) return min(v[1],v[2])>=1;
        return abs(v[1]-v[2])>=3;
    }
};