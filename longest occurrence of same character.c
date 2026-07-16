#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);

    int cnt = 1, mx = 1;

    for (int i = 1; s[i] != '\0'; i++) {
        if (s[i] == s[i - 1]) {
            cnt++;
        } else {
            if (cnt > mx)
                mx = cnt;
            cnt = 1;
        }
    }

    if (cnt > mx)
        mx = cnt;

    printf("%d", mx);

    return 0;
}
