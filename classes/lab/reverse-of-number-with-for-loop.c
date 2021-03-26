#include <stdio.h>

void main(void) {
    int i,rem,s=0,n;
    printf("enter the number \n : ");
    scanf("%d",&n);

    i=n;
    for ( i = n; i > 0;)
    {
        rem = i % 10;
        s = s *10 + rem ;
        i = i/10;

    }
    
    printf("The reverse of %d is %d \n",i,s);
    
}
