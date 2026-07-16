#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int flag = 0;

    for (char ch : s) {
        flag |= (1 << (ch - 'a'));
    }

    if (flag == ((1 << 26) - 1))
        cout << "All are present";
    else
        cout << "Not present";

    return 0;
}
