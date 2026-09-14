class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size() > s.size()) return {};
        vector<int> res;
        int low = 0;
        int high = 0;
        unordered_map<char,int> f;
        unordered_map<char,int> t;
        int k = p.size();
        for(char ch : p){
            f[ch]++;
        }
        while(high < s.size()){
            t[s[high]]++;
            if(high - low + 1 > k){
                t[s[low]]--;
                if(t[s[low]] == 0){
                    t.erase(s[low]);
                }
                low++;
            }
            if(high - low+ 1 == k){
                if(f == t){
                    res.push_back(low);
                }
            }
            high++;
        }
        return res;
    }
};