#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int flag = 0;

    for (char ch : s) {
        flag |= (1 << (ch - '0'));
    }

    if (flag == ((1 << 10) - 1))
        cout << "All are present";
    else
        cout << "Not present";

    return 0;
}
