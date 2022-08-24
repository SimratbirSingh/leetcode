class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        
        int i,j;
        int n=nums.size();
        int cout =0;
       
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if( (nums[i] == nums[j])  &&  ((i*j)%k==0))
                {
                    cout++;
                }
            }
        }
          return cout;
    }
  
};