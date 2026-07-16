#include <stdio.h>

void print(int val){
    if(val == 0)
        return;
    printf("%d ", val);
   print(val - 1); 
}

int main() {
    int x;
    scanf("%d",&x);
    print(x);
    return 0;
}
//*************************************************************************************************************
#include <stdio.h>

void print(int val){
    if(val == 0)
        return;
 print(val - 1);
    printf("%d ", val);
   
}

int main() {
    int x;
    scanf("%d",&x);
    print(x);
    return 0;
}
