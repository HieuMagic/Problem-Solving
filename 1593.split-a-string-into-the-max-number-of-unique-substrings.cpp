/*
 * @lc app=leetcode id=1593 lang=cpp
 *
 * [1593] Split a String Into the Max Number of Unique Substrings
 */

// @lc code=start
class Solution {
public:
    int maxUniqueSplit(string s) {
        /*
        Given a string s, return the maximum number of unique substrings that the given string can be split into.
        You can split string s into any list of non-empty substrings, where the concatenation of the substrings forms the original string. However, you must split the substrings such that all of them are unique.
        A substring is a contiguous sequence of characters within a string.
        */
        int n = s.size();
        unordered_set<string> st;
    }
};
// @lc code=end
