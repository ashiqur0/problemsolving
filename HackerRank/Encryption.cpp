/*
HackerRank: Encryption
Learning: string (space removing, transposing)
Description:
    ১। এক লাইন স্ট্রিং ইনপুট নিতে হবে
    ২। স্ট্রিং থেকে স্পেস রিমোভ করতে হবে
    ৩। স্ট্রিং লেন্থ কে স্কয়ার রুট করে ফ্লর ভ্যলু পাওয়া যাবে যা    কলাম সংখ্যা 
    ৪। স্ট্রিং লেন্থ কে স্কয়ার রুট করে সিল ভ্যলু রো সংখ্যা
    ৫। স্ট্রিং ট্রান্সপোজ করতে হবে। অর্থাৎ কলাম কে রো তে এবং রো কে     কলামে রুপান্তর করতে হবে।
    ৬। প্রতিটি রো প্রিন্ট করার পর একটি স্পেস প্রিন্ট করতে হবে।

    input 1: haveaniceday
    output 1: hae and via ecy

    input 2: have
    anic
    eday
    output 2: feedthedog

    input 3: fto ehg ee dd
    output 3: feed
    thed
    og

    input 4: chillout
    output 4: clu hlt io
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    string s;
    getline(cin, s);

    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    int row = floor(sqrt(s.size()));
    int col = ceil(sqrt(s.size()));

    for(int i=0; i<col; i++) {
        for(int j=i; j<s.size(); j+=col) {
            if(j<s.size()) {
                cout << s[j] ;
            }
        }
        cout << " " ;
    }
    cout << endl;

    return 0;
}