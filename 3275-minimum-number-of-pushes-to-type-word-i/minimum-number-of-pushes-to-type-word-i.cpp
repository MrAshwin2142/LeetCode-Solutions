class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26,0);
        for(char i:word){
            freq[i-'a']++;
        }
        sort(freq.begin(),freq.end());
        // eliminat zeros
        int i=0;
        while(freq[i]==0) i++;
        int cost=0;
        int click=1;
        int keys=0;
        while(i<26){
            cost += click * freq[i];
            keys++;
            if(keys==8){
                keys=0;
                click++;
            }
            i++; 
        }
        return cost;
    }
};