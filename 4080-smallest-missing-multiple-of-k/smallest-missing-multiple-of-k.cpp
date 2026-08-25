class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> freq(201,false);
        for(int i:nums) freq[i]=true;
        for(int i=1;i*k<=200;i++){
            if(!freq[i*k]) return i*k;
        }
        return 101;
    }
};