class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int mx = 0;
        int low = 0;
        int high = 0;
        unordered_map<int,int> f;
        int sum = 0;

        for(high = 0; high < nums.size();high++){
             f[nums[high]]++;
             sum += nums[high];
            while(f[nums[high]] > 1){
               f[nums[low]]--;
               sum -= nums[low];
               low++;
            }
        mx = max(mx,sum);
        }
        return mx;
    }
};