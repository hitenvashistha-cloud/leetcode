class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        int mx = 0;

        for(int x : s) {
            // Start only if previous number doesn't exist
            if(s.find(x - 1) == s.end()) {
                int count = 1;
                int curr = x;

                while(s.find(curr + 1) != s.end()) {
                    curr++;
                    count++;
                }

                mx = max(mx, count);
            }
        }

        return mx;
    }
};