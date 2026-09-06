class Solution {
public:
void comb(string &s,int n,int i,string &diary , vector<string> &res, unordered_map<char, string> &f){
    if(i == n){
        res.push_back(diary);
        return;
    }
    string choice = f[s[i]];
    for(int j = 0; j < choice.size(); j++){
        diary.push_back(choice[j]);
        comb(s,n,i+1,diary,res,f);
        diary.pop_back();
    }
    return;
}
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> f = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        int n = digits.size();
        int i = 0;
        string diary = "";
        vector <string> res;
        comb(digits,n,i,diary,res,f);
        return res;
    }
};