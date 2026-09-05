class Solution {
public:
void nu(int open , int close,int n,string &tmp,vector<string> &res){
    if(open == n && close == n){
        res.push_back(tmp);
        return;
    }
    if(open < n){
        tmp.push_back('(');
        nu(open+1,close,n,tmp,res);
         tmp.pop_back();
    }
    if(close < open){
        tmp.push_back(')');
        nu(open,close+1,n,tmp,res);
        tmp.pop_back();
    }
    return;
}
    vector<string> generateParenthesis(int n) {
        if(n == 1) return {"()"};
        vector<string> res;
        string tmp = "";
        nu(0,0,n,tmp,res);
        return res;
    }
};