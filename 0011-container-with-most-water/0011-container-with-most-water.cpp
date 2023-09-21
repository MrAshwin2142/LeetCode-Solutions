class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
        int mx=0;
        int l=0;
        int r=n-1;
        while(l<r){
            mx=max(mx,min(h[r],h[l]) * (r-l));
            if(h[r]>h[l]) l++;
            else r--;
        }
        return mx;
    }
};