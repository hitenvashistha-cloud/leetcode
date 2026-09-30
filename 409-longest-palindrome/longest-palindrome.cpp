class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size() == 1) return 1;
        unordered_map<int,int> f;
        int count = 0;
        int mx = 0;
        for(char ch : s){
            f[ch]++;
        }
        for(auto it : f){
            if(it.second%2 == 0){
                count += it.second;
            }else{
            count += it.second -1;
            mx = 1;
           }
        }
        return count + mx;
    }
};