class Solution {

public:

    int numSubarraysWithSum(vector<int>& nums, int goal) {

        unordered_map<int,int> mpp;

        int sum = 0;
        int cnt = 0;

        for(auto i:nums)
        {
            sum+=i;
            if(sum==goal) cnt++;
            if(mpp.find(sum-goal)!=mpp.end())

            {

                cnt+=mpp[sum-goal];

            }
           mpp[sum]++;

        }

        return cnt;

    }

};