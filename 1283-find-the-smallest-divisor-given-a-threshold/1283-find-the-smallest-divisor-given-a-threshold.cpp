class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int r=*max_element(nums.begin(),nums.end());
        int ans=r;
        while(l<=r)
        {  
            long long sum=0;
            int mid=l+(r-l)/2;
            for(int i = 0;i<nums.size();i++)
            {
               sum +=(nums[i]+mid-1)/mid;
            }
            if(sum <= threshold)
            {
               ans=mid;
               r=mid-1;
            }
            else
            {
               l=mid+1;
            } 
        }
       return ans;   
    }
};