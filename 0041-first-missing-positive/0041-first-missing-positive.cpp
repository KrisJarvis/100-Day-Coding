class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>0) mp[nums[i]]++;
        }
        for(int i=1;i<=pow(10,5);i++){
            if(mp[i]<1) return i;
        }
        return pow(10,5)+1;
    }
};