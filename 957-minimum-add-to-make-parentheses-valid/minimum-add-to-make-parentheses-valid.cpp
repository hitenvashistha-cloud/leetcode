class Solution {
public:
    int minAddToMakeValid(string s) {
        if(s.empty()){
            return 0;
        }
        int count = 0;
        stack<char> st;
        for(char ch : s){
            if(ch == '('){
                st.push(ch);
            }else{
                if(st.empty()){
                     count++;
                }else {
                   st.pop();
                }
            }
           
        }
        if(st.empty()){
            return count;
           }
           return st.size() + count;
    }
};