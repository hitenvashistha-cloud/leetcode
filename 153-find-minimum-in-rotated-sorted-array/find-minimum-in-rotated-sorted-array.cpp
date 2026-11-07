class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
         if(nums[i] <= nums[j]){
            return nums[i];
         }
        int ans = nums[j];
        while(i < j){
           
             int mid = i +(j-i)/2;
             
             if(nums[i] > nums[j] && nums[i] < nums[mid]){
                   ans  = min(ans,nums[j]);
                   i = mid+1;
             }else{
                 j = mid;
                 ans = min(ans,nums[mid]);
             }
     
        }
        return ans;
    }
};