class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int top=INT_MIN;
        int N=nums.size();
        
        for(int i=0;i<N;i++){
            if(nums[i]==1)count++;
            else{
                top=max(top,count);
                count=0;
            }
        }
        top=max(top,count);
        
        return top;
        
    }
};