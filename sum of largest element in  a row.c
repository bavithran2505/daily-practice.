INPUT:                
70 50 80 50      
100 90 60 150 
200 60 40 30   
OUTPUT:            
430                      
 

#include <stdio.h>

int main() {
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n];
    int fm, sm;
    int sum = 0;

    for (int i = 0; i < m; i++) {

        scanf("%d", &fm);
        sm = -99999; 

        for (int j = 1; j < n; j++) {
            scanf("%d", &a[i][j]);

            if (a[i][j] > fm) {
                sm = fm;
                fm = a[i][j];
            }
            else if (a[i][j] > sm) {
                sm = a[i][j];
            }
        }

        sum += fm;
    }

    printf("%d", sum);

    return 0;
}
