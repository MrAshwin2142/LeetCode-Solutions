class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            if (nums[low] < target)
                low = low + 1;
            else if (nums[high] > target)
                high = high - 1;
            else if (nums[low] == target && nums[high] == target) {
                v.push_back(low);
                v.push_back(high);
                return {low, high};
            }
        }
        return {-1, -1};
    }
};