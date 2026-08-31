class Solution {
public:

    void reverse(string &s, int i, int j) {
        while(i < j) {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;

            i++;
            j--;
        }
    }

    string reverseStr(string s, int k) {

        int i = 0;

        while(i < s.size()) {

            int j = min(i + k - 1, (int)s.size() - 1);

            reverse(s, i, j);

            i = i + 2 * k;
        }

        return s;
    }
};