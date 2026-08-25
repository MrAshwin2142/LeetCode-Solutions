class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> s;
        for(int i:nums) s.insert(i);
        for(int i=1;i<100;i++){
            int t=k*i;
            if(s.find(t)==s.end()) return t;
        }
        return 101;
    }
};