class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0,e=nums.size();
        int index=0;
            while(index<e){
                int mid= s+(e-s)/2;
                if(e==1)return nums[0];
                if(index%2==0){
                    if(nums[index]!=nums[index+1]) return nums[index];
                    else index++;
                }else index++;
            }
        return 0;
    }
    
};