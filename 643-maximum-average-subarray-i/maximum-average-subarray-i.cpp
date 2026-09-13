class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        int low = 0;
        int high = 0;
        double mx  =INT_MIN;
        while(high < nums.size()){
            sum+=nums[high];
            if(high - low+1 > k){
                sum = sum + (-1 * nums[low]);
                low++;
            }
            if(high- low + 1 == k){
                double avg = (double)sum/k;
                mx = max(mx,avg);
            } 
            high++;
        }
        return mx;
    }
};