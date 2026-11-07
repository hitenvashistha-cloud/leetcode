class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int i = 0 ;
        int  j = nums.size() -1;
        while(i <= j){
            if(i == j){
                return nums[i];
            }
            int mid = i +(j -i)/2;

            if(nums[mid] == nums[mid+1]){
                   int len = j - mid + 1;
                   if(len%2 == 1){
                         i = mid +2;
                   }else{
                        j = mid -1;
                   }

            }else if(nums[mid] == nums[mid-1]){
                 int len = mid  - i + 1;
              if(len%2 == 0){
                i = mid+1;
              }else{
                  j = mid -2;
              }
            }else{
                return nums[mid];
            }
        }
        return -1;
    }
};