class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i:nums){
            pq.push(i);
        }
        while(--k){
            pq.pop();
        }
        return pq.top();
    }
};