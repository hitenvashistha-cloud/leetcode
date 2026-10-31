class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        int i = n - 2;
        int j = n - 1;

        // Find pivot
        while(i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        // If no pivot exists, reverse the entire array
        if(i < 0) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find the smallest element greater than pivot
        int mn = INT_MAX;
        int idx = -1;

        for(j = i + 1; j < n; j++) {
            if(nums[j] > nums[i] && nums[j] < mn) {
                mn = nums[j];
                idx = j;
            }
        }

        // Swap pivot and selected element
        swap(nums[i], nums[idx]);

        // Sort remaining elements
        sort(nums.begin() + i + 1, nums.end());
    }
};