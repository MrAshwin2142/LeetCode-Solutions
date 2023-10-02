class Solution {
public:
    bool winnerOfGame(string colors) {
        int n=colors.size();
        if(n<3) return false;
        int ta=0,tb=0;
        for(int i=1;i<n-1;i++){
            if(colors[i]==colors[i-1] && colors[i]==colors[i+1]){
                if(colors[i]=='A') ta++;
                if(colors[i]=='B') tb++;

            }
        }
        return ta>tb?true:false;
    }
};