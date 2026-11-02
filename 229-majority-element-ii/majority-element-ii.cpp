class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        double t = n/3;
        unordered_map<int, int> f;
        for(int x : nums){
            f[x]++;
        }
        for(const auto& l : f){
            if(l.second > t){
                ans.push_back(l.first);
            }
        }
        return ans;
    }
};