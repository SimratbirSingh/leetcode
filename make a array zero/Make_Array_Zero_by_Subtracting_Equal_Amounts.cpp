class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
   
sort(nums.begin(),nums.end());
int i=0;
int c=0;
while(i<nums.size()){
if(nums[i]==0){
i++;
}
else{
int a=nums[i];
for(int k=i;k<nums.size();k++){
nums[k]=nums[k]-a;
}
c++;
i++;
}
}
return c;
     
        
    }
};