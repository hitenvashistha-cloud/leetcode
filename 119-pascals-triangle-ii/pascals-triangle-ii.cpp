class Solution {
public:
    vector<int> getRow(int rowIndex) {
       if (rowIndex == 0) return {1};
       if (rowIndex == 1) return {1,1};

        vector<vector<int>> res;
        int count = 1;
        for(int i = 0; i <= rowIndex;i++){
            vector<int> ans;
            for(int j = 1; j <= count;j++){
                 if(j == 1 || j == count){
                    ans.push_back(1);
                 }else{
                    int sum = res[i-1][j-1] + res[i-1][j-2];
                    ans.push_back(sum);
                 }
            }
            res.push_back(ans);
            count++;
        }
        return res[rowIndex];
    }
};