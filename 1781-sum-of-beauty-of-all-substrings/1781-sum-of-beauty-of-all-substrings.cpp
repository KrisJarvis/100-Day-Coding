class Solution {
public:
    // This function calculates the beauty sum of a string.
    int beautySum(string s) {
        int sum = 0; // Initialize sum to store the beauty sum result.
        int n = s.size(); // Get the size of the string.
        int charCounts[26]; // Array to count occurrences of each character (a-z).

        // Iterate over the string starting with substrings of length 1 to n.
        for (int start = 0; start < n; ++start) {
            memset(charCounts, 0, sizeof charCounts); // Reset character counts for each new starting point.
            // Explore all substrings starting at 'start' and ending at 'end'.
            for (int end = start; end < n; ++end) {
                // Increment the count of the current character.
                ++charCounts[s[end] - 'a'];

                // Initialize max and min occurrences of characters found so far.
                int minFreq = 1000, maxFreq = 0; 
                // Iterate over the counts to find the max and min frequencies.
                for (int count : charCounts) {
                    if (count > 0) { // Only consider characters that appear in the substring.
                        minFreq = min(minFreq, count);
                        maxFreq = max(maxFreq, count);
                    }
                }
                // Add the beauty (difference between max and min frequency) of this substring to the sum.
                sum += maxFreq - minFreq;
            }
        }
        // Return the total beauty sum of all substrings.
        return sum;
    }
};