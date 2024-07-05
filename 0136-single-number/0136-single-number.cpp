class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int s=nums.size()-1;
        
        for (int i=1;i<s;i+=2){
            if(i>s)return nums[s];
            
            if(nums[i]!=nums[i-1]){
                return nums[i-1];
            }
            
        }return nums[s];
    }
};