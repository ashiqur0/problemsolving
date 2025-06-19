/*
LeetCode: 58. Length of Last Word
Learning: String
Description: Given a string s consisting of words and spaces, return the length of the last word in the string.
A word is a maximal substring consisting of non-space characters only.

Example 1:
Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
*/

public class _58_LengthofLastWord {
    public static void main(String[] args) {
        String str = "Hello World";
        System.out.println(lengthOfLastWord(str));
    }
    public static int lengthOfLastWord(String s) {
        String[] str = s.split(" ");
        return str[str.length - 1].length();
    }
}
