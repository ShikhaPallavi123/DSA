//
// Created by Shikha Pallavi on 1/3/25.
//
#include <iostream>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;  // Hash set to store unique characters
        int left = 0, maxLength = 0;

        // Iterate with the right pointer
        for (int right = 0; right < s.size(); ++right) {
            // If the character at s[right] is in the set, move the left pointer
            while (charSet.find(s[right]) != charSet.end()) {
                // Remove s[left] from the set and move left pointer forward
                charSet.erase(s[left]);
                left++;
            }
            // Add the current character to the set
            charSet.insert(s[right]);

            // Calculate the max length of the substring
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};

int main() {
    Solution solution;

    // Test cases
    string s1 = "abcabcbb";
    string s2 = "bbbbb";
    string s3 = "pwwkew";

    cout << "Longest substring length for '" << s1 << "': " << solution.lengthOfLongestSubstring(s1) << endl;
    cout << "Longest substring length for '" << s2 << "': " << solution.lengthOfLongestSubstring(s2) << endl;
    cout << "Longest substring length for '" << s3 << "': " << solution.lengthOfLongestSubstring(s3) << endl;

    return 0;
}
