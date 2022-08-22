class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mini=nums[0];
        int maxi=nums[n-1];
            int i=mini;
        while(i>0)
        {
            if(mini%i==0 && maxi%i==0 ){
                return i;
            }
            i--;
        } 
        return 1;
    }
};