class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperature) {
        int n=temperature.size();
        vector<int> highTemp(n,0);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && temperature[st.top()]<temperature[i]){
                highTemp[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
            
        }
        return highTemp;
    }
};