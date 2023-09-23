class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int mx=0;
        int sum=0;
        for(int i:gain){
            sum+=i;
            mx=max(sum,mx);
        }
        return mx;
    }
};