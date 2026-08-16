class Solution {
public:
    int minPenalty(int p, vector<int>& lights, vector<int>& arr) {
        sort(lights.begin(),lights.end());
        int li=lights[lights.size()-1];
        int ans=0;
        for(int i:arr){
            int t=i%p;
            if(t>=li) ans=max(ans,p-t);
        }
        return ans;
    }
};