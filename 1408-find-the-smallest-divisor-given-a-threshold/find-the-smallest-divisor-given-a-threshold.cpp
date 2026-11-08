class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int i = 1;
        int j = *max_element(nums.begin(),nums.end());
        int ans = 0;
        while( i <= j){
            int mid = i + (j-i)/2;

            int sum = 0;
            for(int k = 0; k < nums.size();k++){
                sum += (nums[k] + mid - 1)/mid;
            }
            if(sum > threshold ){
                  i = mid +1;
            }else{
                  ans = mid;
                  j = mid -1;
            }
        }
        return ans;
    }
};