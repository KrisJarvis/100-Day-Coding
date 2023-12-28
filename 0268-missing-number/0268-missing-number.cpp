class Solution {
public:
    int missingNumber(vector<int>& v) {
        int n = v.size();
        int sum = (n*(n+1))/2;
        for (int i = 0;i<n;i++) sum -= v[i];
        return int(sum);
    }
};