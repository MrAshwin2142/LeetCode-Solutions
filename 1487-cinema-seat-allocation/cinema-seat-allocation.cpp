class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& r) {
        unordered_map<int,vector<int>> mp;
        for(auto i : r){
            if(i[1]==1 || i[1]==10) continue;
            mp[i[0]].push_back(i[1]);
        }
        int ans = 2*(n-mp.size());
        vector<bool> v(11,true);
        for(auto i:mp){
            int t=0;
            for(int j:i.second) v[j]=false;
            int p1 = (v[2] & v[3] & v[4] & v[5]);
            int p2 = (v[4] & v[5] & v[6] & v[7]);
            int p3 = (v[6] & v[7] & v[8] & v[9]);
            if( p1 && p3) t=2;
            else if(p1 || p2 || p3) t=1;
            cout<<t<<endl;
            ans+=t;
            for(int i=0;i<11;i++){cout<<v[i]<<" "; v[i]=true;}
            cout<<endl;
        }
        return ans;
    }
};