int main() {
    int n, fm, sm, cur;

    scanf("%d", &n);
    scanf("%d", &fm);

    sm = -2147483648;   

    for (int ctr = 2; ctr <= n; ctr++) {
        scanf("%d", &cur);

        if (cur > fm) {
            sm = fm;
            fm = cur;
        }
        else if (cur > sm && cur != fm) {
            sm = cur;
        }
    }

    printf("%d %d", fm, sm);

    return 0;
}
