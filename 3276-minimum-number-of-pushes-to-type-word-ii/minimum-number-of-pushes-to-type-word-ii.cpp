class Solution {
public:
    int minimumPushes(string word) {
        int cost=0;
        vector<int> freq(26,0);
        for(char i:word){
            freq[i-'a']++;
        }
        sort(freq.begin(),freq.end());
        vector<int> v;
        int k=0;
        while(freq[k]==0) k++;
        while(k<26) v.push_back(freq[k++]);
        reverse(v.begin(),v.end());
        int click=1;
        int keys=0;
        for(int i=0;i<v.size();i++){
            if(keys==8){
                click++;
                keys=0;
            }
            cost += v[i]*click;
            keys++;
        }
        return cost;
    }
};