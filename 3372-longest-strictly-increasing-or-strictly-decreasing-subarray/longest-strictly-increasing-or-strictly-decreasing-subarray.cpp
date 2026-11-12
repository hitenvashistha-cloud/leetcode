class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        int countI = 1;
        int countD = 1;
        for(int i = 1; i < n;i++){
            if(nums[i] > nums[i-1]){
                countI++;
            }else{
                countI = 1;
            }
            ans = max(ans,countI);
        }
        for(int i = 1; i < n;i++){
            if(nums[i] < nums[i-1]){
                countD++;
            }else{
                countD = 1;
            }
            ans = max(ans,countD);
        }
        return ans;
    }
};