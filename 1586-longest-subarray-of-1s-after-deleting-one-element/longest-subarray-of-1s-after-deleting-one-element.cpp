class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int low = 0;
        int high = 0;
        int mx =0;
        int z = 0;
        for(high = 0; high < nums.size();high++){
            if(nums[high] == 0){
                z++;
            }
            while(z > 1){
               if(nums[low] == 0){
                z--;
               }
               low++;
            }
            mx= max(mx,high - low);

        }
        return mx;
    }
};