# LeetCode: 2185. Counting Words With a Given Prefix
# Learning: Array, String, String Matching
# Description: You are given an array of strings words and a string pref. Return the number of strings in words that contain pref as a prefix. A prefix of a string s is any leading contiguous substring of s.
class Solution(object):
    def prefixCount(self, words, pref):
        """
        :type words: List[str]
        :type pref: str
        :rtype: int
        """
        count = 0
        prefsize = len(pref)
        for i in range(len(words)):
            if pref == words[i][0:prefsize]:
                count += 1
        return count