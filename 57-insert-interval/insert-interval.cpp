class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        int st1 = intervals[0][0];
        int ed1 = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++){
            int st2 = intervals[i][0];
            int ed2 = intervals[i][1];
            if(ed1 >= st2){
                st1 = st1;
                ed1=  max(ed1,ed2);
                continue;
            }
            res.push_back({st1,ed1});
            st1=  st2;
            ed1 = ed2;
        }
        res.push_back({st1,ed1});
        return res;

    }
};