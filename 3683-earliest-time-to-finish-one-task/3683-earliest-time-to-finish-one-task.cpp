class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int n = tasks.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            sum=tasks[i][0]+tasks[i][1];
            ans.push_back(sum);
        }
        sort(ans.begin(),ans.end());
        return ans[0];
        
    }
};