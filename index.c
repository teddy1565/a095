#include <stdlib.h>
#include <stdio.h>


int main(void) {
    int n,m;
    while(~scanf("%d%d",&n,&m)) {
        if (n==m) {
            printf("%d\n",m);
        } else {
            printf("%d\n",m+1);
        }
    }
    return 0;
}