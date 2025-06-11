/*
LeetCode: 412. Fizz Buzz
Learning: Math, String, Simulation
Description: Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.
 

Example 1:

Input: n = 3
Output: ["1","2","Fizz"]

Example 2:
Input: n = 5
Output: ["1","2","Fizz","4","Buzz"]
Example 3:

Input: n = 15
Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]
*/

#include <bits/stdc++.h>
using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> answer(n);
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0)  answer[i - 1] = "FizzBuzz";
        else if(i % 3 == 0) answer[i - 1] = "Fizz";
        else if(i % 5 == 0) answer[i - 1] = "Buzz";
        else answer[i - 1] = to_string(i);
    }
    return answer;
}

int main() {

    // int n;
    // cin >> n;
    int n = 3;  // Output: ["1","2","Fizz"]

    vector<string> ans = fizzBuzz(n);
    for (string s : ans) {
        cout << s << " ";
    }
    cout << endl;

  return 0;
}