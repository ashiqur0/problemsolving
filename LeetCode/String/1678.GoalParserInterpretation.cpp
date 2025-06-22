/*
LeetCode: 1678. Goal Parser Interpretation
Learning: String
Description: You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command

Input: command = "G()(al)"
Output: "Goal"
Explanation: The Goal Parser interprets the command as follows:
G -> G
() -> o
(al) -> al
The final concatenated result is "Goal".
*/

#include <bits/stdc++.h>
using namespace std;

string interpret(string command) {
    string s = "";
    for(int i = 0; i < command.size(); i++) {
        if(command[i] == 'G') {
            s += "G";
        }
        else if(command[i] == '(' && command[i+1]  == ')') {
            s += "o";
            i++;
        } else {
            s += "al";
            i+=3;
        }
    }
    return s;
}

int main() {

    string s = "G()(al)";
    cout << interpret(s) << endl;

  return 0;
}
