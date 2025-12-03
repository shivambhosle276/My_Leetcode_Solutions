class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int low = *min_element(nums.begin(),nums.end());
        int high = *max_element(nums.begin(),nums.end());
        vector<int> ans;
        unordered_map<int,bool> map;
         for (int x : nums) 
         {map[x] = true;}

        sort(nums.begin(),nums.end());
        for(int i=low;i<=high;i++)
        {
            if(map.find(i)==map.end())
            {
                ans.push_back(i);
            }

        }
        return ans;
        
    }
};