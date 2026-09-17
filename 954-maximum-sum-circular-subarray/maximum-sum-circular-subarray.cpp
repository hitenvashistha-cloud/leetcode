class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int best = nums[0];
        int worst= nums[0];
        int mx =nums[0];
        int mn = nums[0];
        int tot = nums[0];
        for(int i =1; i< nums.size();i++){
        tot += nums[i];
        int v1 =  nums[i];
        int v2  = nums[i]+ best;
        int v3 = nums[i] + worst;
        best  = max(v1,v2);
        worst = min(v1,v3);
        mx = max(mx,best);
        mn =  min(mn,worst);
    }
    if(mx < 0){
        return mx;
    }
    return max(mx,tot-mn);
    }
};