class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        int j = 1;
        while(j < n && k < n){
            while(k < n && nums[k]%2 == 0) {
               k+=2;
            }
            while(j < n && nums[j]%2 != 0){
                j += 2;
            }
            if(j < n){
                swap(nums[j],nums[k]);
            }
        }
        return nums;
    }
};