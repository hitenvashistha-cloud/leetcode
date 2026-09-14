class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size() > s.size()) return {};
        vector<int> res;
        int low = 0;
        int high = 0;
        int f[26]= {0};
        int t[26]= {0};
    
        int k = p.size();
        for(char ch : p){
            f[ch-'a']++;
        }
        while(high < s.size()){
            t[s[high]-'a']++;
            if(high - low + 1 > k){
                t[s[low]-'a']--;
                low++;
            }
            if(high - low+ 1 == k){
                bool same = true;
               for(int i= 0; i < 26;i++){
                if(f[i] != t[i]){
                    same = false;
                    break;
                }
               }
            if(same){
                res.push_back(low);
            }
            }

            high++;
        }
        return res;
    }
};