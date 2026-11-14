class Solution {
public:
    int cal(vector<int>& nums, int l) {
        int ans = INT_MAX;
        int low = 0;
        int high = l;
        int sum = 0;

        for(int i = low; i < high; i++) {
            sum += nums[i];
        }

        if(sum > 0) {
            ans = min(ans, sum);
        }

        while(high < nums.size()) {
            sum = sum - nums[low] + nums[high];
            low++;
            high++;

            if(sum > 0) {
                ans = min(ans, sum);
            }
        }

        if(ans == INT_MAX) return -1;

        return ans;
    }

    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int res = INT_MAX;

        for(int i = l; i <= r; i++) {
            int s = cal(nums, i);

            if(s != -1) {
                res = min(res, s);
            }
        }

        return res == INT_MAX ? -1 : res;
    }
};