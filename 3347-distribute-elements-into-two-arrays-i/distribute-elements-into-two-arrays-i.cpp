class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> v1,v2;
        int n=nums.size();
        v1.push_back(nums[0]);
        v2.push_back(nums[1]);
        int l=0,k=0;
        for(int i=2;i<n;i++){
            if(v1[l]>v2[k]){
                v1.push_back(nums[i]);
                l++;
            }
            else{
                v2.push_back(nums[i]);
                k++;
            }
        }
        for(int i:v2)
        v1.push_back(i);
        return v1;

    }
};