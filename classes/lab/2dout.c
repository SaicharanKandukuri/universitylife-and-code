/*
Output : 
         1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5 
*/
#include <stdio.h>

void main(void) {
    int i,j;
    for (i=1;i<=5;i++) {
        printf(" ");

        for (j=(i*2-1);j>=i;j--) {
            printf("%d",j);
            printf("\n");
        }
    }
}
