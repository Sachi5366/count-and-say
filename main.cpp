#include <bits/stdc++.h>
using namespace std;

/*
 Count and Say
 Sequence:
 1 -> "1"
 2 -> "11"
 3 -> "21"
 4 -> "1211"
 5 -> "111221"
*/

string countAndSay(int n) {
    string s = "1";
    for (int i = 2; i <= n; i++) {
        string next = "";
        for (int j = 0; j < (int)s.size(); ) {
            char c = s[j];
            int cnt = 0;
            while (j < (int)s.size() && s[j] == c) {
                cnt++;
                j++;
            }
            next += to_string(cnt);
            next += c;
        }
        s = next;
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    cout << countAndSay(n) << "\n";
    return 0;
}
