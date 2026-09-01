class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        if(s.empty()) return 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int count = 0;
       int i = 0, j = 0;
        while(i < g.size() && j < s.size()){
            int el  = s[j] - g[i];
            if(el >= 0){
                j++;
                i++;
                count++;
            }else{
                j++;    
            }
        }
        return count;
    }
};