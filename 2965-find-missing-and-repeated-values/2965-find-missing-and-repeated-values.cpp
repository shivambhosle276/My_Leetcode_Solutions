class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int n = grid.size();                     // grid is n x n
        unordered_map<int, int> mp;              // count frequency
        
        vector<int> ans;

        // find repeated number
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                
                mp[grid[i][j]]++;                // increment count

                if (mp[grid[i][j]] == 2) {       // second time coming
                    ans.push_back(grid[i][j]);   // repeated value
                }
            }
        }

        // find missing number
        for (int i = 1; i <= n * n; i++) {
            if (mp[i] == 0) {                    // never appeared
                ans.push_back(i);                // missing value
                break;
            }
        }

        return ans;
    }
};
