

class Solution {
public:
    int search(vector<int> &nums, int target) {
        return binarySearch(nums, target, 0, nums.size() - 1);
    }
    
    int binarySearch(vector<int> &nums, int target, int start, int end) {
        if (start > end) {
            return -1; // Not found
        }
        
        int mid = start + (end - start) / 2;
        
        if (nums[mid] == target) {
            return mid; // Found the target
        } else if (nums[mid] < target) {
            return binarySearch(nums, target, mid + 1, end); // Search in the right half
        } else {
            return binarySearch(nums, target, start, mid - 1); // Search in the left half
        }
    }
};
