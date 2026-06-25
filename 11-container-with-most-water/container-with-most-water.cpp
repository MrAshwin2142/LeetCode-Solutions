class Solution {
public:
    int maxArea(vector<int>& height) {
        int e=height.size()-1;
        int s=0;
        int mx=0;
        while(s<e){
            int water=min(height[s],height[e]) * (e-s);
            if(height[e]>height[s]) s++;
            else e--;
            mx=max(mx,water); 
        }
        return mx;
    }
};