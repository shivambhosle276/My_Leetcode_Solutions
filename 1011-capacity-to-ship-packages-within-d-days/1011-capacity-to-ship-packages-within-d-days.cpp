class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=weights[i];
        }
        int l = *max_element(weights.begin(),weights.end());
        int r = sum;
        int ans =0;
        while(l<=r)
        {   
            int sum2=0;
            int count=1;
            int mid =(l+r)/2;
            for(int i=0;i<n;i++)
            {
                if((sum2+weights[i])>mid)
                {
                    sum2=0;
                    count++;
                }
                sum2+=weights[i];
            }
            if(count<=days)
            {
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
            
        }
        return ans;
    }
};