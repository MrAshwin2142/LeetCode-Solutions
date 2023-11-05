class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int mx=arr[0];
        int n=arr.size();
        for(int i=0;i<n;i++){
            mx=max(mx,arr[i]);
        }
        if(k>=n) return mx;
        mx=arr[0];
        int i=0;
        int win=0;
        while(true){
            if(win==k) return mx;
            if(mx>arr[i]) win++;
            else {
                win = mx==arr[i]?0:1;
                mx=arr[i];
            }
            i=(i+1)%n;
        }
        return -1;
    }
};