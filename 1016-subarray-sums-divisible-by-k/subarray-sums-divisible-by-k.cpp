class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> f;
        f[0] = 1;
        int s = 0;
        int count =0;
        for(int i = 0; i < nums.size();i++){
         s += nums[i];
         int rem  = s%k;
         if (rem < 0)
           rem += k;
         if(f.find(rem) != f.end()){
            count += f[rem];
         }
         f[rem]++;
        }
        return count;
    }
};