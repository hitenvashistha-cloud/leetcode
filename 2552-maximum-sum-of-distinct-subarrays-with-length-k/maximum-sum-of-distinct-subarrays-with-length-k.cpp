class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long mx= 0;
        unordered_map<int,int> f;
        long long sum = 0;
        int low  = 0;
        int high = 0;
       
      while(high < nums.size()){
          f[nums[high]]++;
          sum += nums[high];

          if(high - low + 1 > k){
            f[nums[low]]--;
            sum -= nums[low];
            if(f[nums[low]] == 0){
                f.erase(nums[low]);
                }
            low++;
          }
          if(high - low + 1 == k && f.size() == k){
            mx = max(mx,sum);
          }
          high++;
    }
    return mx;
    }
};