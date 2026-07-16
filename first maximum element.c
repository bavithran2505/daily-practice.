#include <stdio.h>

int main() {
    int n, fm, cur;

    scanf("%d", &n);
    scanf("%d", &fm);

    for (int ctr = 2; ctr <= n; ctr++) {
        scanf("%d", &cur);

        if (cur > fm) {
            fm = cur;
        }
    }

    printf("%d", fm);

    return 0;
}
