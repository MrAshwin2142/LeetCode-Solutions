    bool comp(pair<float,float> a,pair<float,float> b){
        return a.first/a.second<b.first/b.second;
    }
class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n=dist.size();
        pair<float,float> pr[n];
        for(int i=0;i<n;i++){
            pr[i]={dist[i],speed[i]};
        }
        sort(pr,pr+n,comp);
        for(int i=1;i<n;i++){
            if(pr[i].first/pr[i].second<=i)  return i;
        }
return n;
    }
};