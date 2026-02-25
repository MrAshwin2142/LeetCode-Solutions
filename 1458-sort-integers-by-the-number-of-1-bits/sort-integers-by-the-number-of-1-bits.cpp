class Solution {
public:
    int bitcount(int n){
        int count=0;
        while(n){
            count+=n&1;
            n=n>>1;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(bitcount(arr[i])>bitcount(arr[j])) swap(arr[i],arr[j]);
                if(bitcount(arr[i])==bitcount(arr[j])&& arr[i]>arr[j])  swap(arr[i],arr[j]);
            }
        }
        return arr;
    }
};