#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int i = 0;

    while (i < s.length()) {
        char ch = s[i++];
        int cnt = 0;

        while (i < s.length() && isdigit(s[i])) {
            cnt = cnt * 10 + (s[i] - '0');
            i++;
        }

        while (cnt--) {
            cout << ch;
        }
    }

    return 0;
}
