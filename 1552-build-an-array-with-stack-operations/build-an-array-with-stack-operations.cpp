class Solution {
public:
    vector<string> buildArray(vector<int>& tar, int n) {
    int ind=0;
    vector<string>ans;
    for(int i=1;i<=n && ind<tar.size();i++)
    {
        ans.push_back("Push");
        if(tar[ind]!=i) ans.push_back("Pop");
        else ind++;
    }
    return ans;
}
};