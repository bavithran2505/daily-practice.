#include <iostream>
using namespace std;

void hexa(int n) {
    if (n == 0)
        return;

    hexa(n / 16);

    int rem = n % 16;

    if (rem < 10)
        cout << rem;
    else
        cout << char('A' + rem - 10);
}

int main() {
    int n;
    cin >> n;

    if (n == 0)
        cout << 0;
    else
        hexa(n);

    return 0;
}
