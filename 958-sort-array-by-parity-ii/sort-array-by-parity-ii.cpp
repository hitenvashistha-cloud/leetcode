class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int k = 0;
        int j = 1;
        for(int i = 0; i < n;i++){
            if(nums[i]%2 == 0){
               res[k] = nums[i];
               k+=2;
            }else{
                res[j] = nums[i];
                j+= 2;
            }
        }
        return res;
    }
};