class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int low = 0;
        int high = 0;
        int mx =0;
        unordered_map<int,int> f;
        for(high = 0; high < nums.size();high++){
            f[nums[high]]++;
            while(f[0] > 1){
                f[nums[low]]--;
                low++;
            }
            int len = high - low;
            mx= max(mx,len);
        }
        return mx;
    }
};