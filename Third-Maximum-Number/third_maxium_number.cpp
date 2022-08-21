class Solution {
public:
    int thirdMax(vector<int>& nums) {
      int n =nums.size();
        sort(nums.begin(), nums.end());
        int i,count=0;
        
        if(n==1 || n==2){
           return  *max_element(nums.begin(), nums.end());
        }
        else{
            for( i=n-1;i>0;i--)
            {
                if(nums[i]>nums[i-1])
                {
                    count++;
                }
                
                if(count==2)
                {
                    return nums[i-1];
                }
              
        }
           return  *max_element(nums.begin(), nums.end());
            
                }
    }
};