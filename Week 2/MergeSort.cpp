class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        if(intervals.size()<=1) return intervals;
        sort(begin(intervals), end(intervals));
        ans.push_back(intervals[0]);
        int i=0;
        for(int j=1; j<intervals.size(); j++){
            if(ans[i][1] >= intervals[j][0]) ans[i][1] = max(ans[i][1], intervals[j][1]);
   
            else{
                i++;
                ans.push_back(intervals[j]);
            }
        }
        return ans;
    }
};
