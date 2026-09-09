class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n  = nums.size();
        if(n == 1) return {nums[0]};
        vector<int> res(n);
        int k =0;
        int j = n-1;
       for(int i = 0; i < n;i++){
            if(nums[i]%2 == 0){
                res[k] = nums[i];
                k++;

            }else{
                res[j] = nums[i];
                j--; 
            }
        }
        return res;
    }
};