class Solution {
public:
   int convert (string s){
          int mounth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
           
        int m = stoi(s.substr(0, 2));
        int d = stoi(s.substr(3, 2));

        int days = d;

        for (int i = 0; i < m - 1; i++) {
            days += mounth[i];
        }

        return days;
   }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
         
         int a1 = convert(arriveAlice);
         int l1 = convert(leaveAlice);
         int a2 = convert(arriveBob);
         int l2 = convert(leaveBob);

         int start = max(a1,a2);
         int end = min(l1,l2);

         return max(0,end - start +1);

    }
};