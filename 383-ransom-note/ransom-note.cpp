class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> f;
        for(char ch : magazine){
            f[ch]++;
        }
        for(char ch : ransomNote){
            f[ch]--;
        }
      for(auto it : f){
        if(it.second < 0){
               return false;
        }
      }
      return true;
    }
};