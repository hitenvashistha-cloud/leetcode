class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        const int MOD = 1000000007;

        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<long long> power(n);

        power[0] = 1;

        for (int i = 1; i < n; i++) {
            power[i] = (power[i - 1] * 2) % MOD;
        }

        int j = n - 1;
        int i = 0;
        long long sub = 0;

        while (i <= j) {
            if (nums[i] + nums[j] > target) {
                j--;
            } 
            else {
                sub = (sub + power[j - i]) % MOD;
                i++;
            }
        }

        return sub;
    }
};