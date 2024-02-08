#include <vector>
#include <algorithm> 
class Solution {
public:
    int smallestDivisor(std::vector<int>& nums, int threshold) {
        int left = 1; 
        int right = *std::max_element(nums.begin(), nums.end()); 
        while (left < right) {
            int mid = (left + right) >> 1;
            int sum = 0; 
            for (int num : nums) {
                sum += (num + mid - 1) / mid;
            }
            if (sum <= threshold) {
                right = mid; 
            } else {
                left = mid + 1; 
            }
        }
        
        return left;
    }
};