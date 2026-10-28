class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        int count = 1;
        for(int i = 1; i <= numRows;i++){
            vector<int> ans;
            for(int j = 1; j <= count;j++){
                 if(j == 1 || j == count){
                    ans.push_back(1);
                 }else{
                    int sum = res[i-2][j-1] + res[i-2][j-2];
                    ans.push_back(sum);
                 }
            }
            res.push_back(ans);
            count++;
        }
        return res;
    }
};