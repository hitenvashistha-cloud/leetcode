class Solution {
public:
    vector<int> getRow(int rowIndex) {

        int n = rowIndex + 1;
        vector<int> ans(n, 1);

        long long val = 1;

        for(int i = 1; i < n; i++) {
            val = val * (rowIndex - i + 1) / i;
            ans[i] = val;
        }

        return ans;
    }
};