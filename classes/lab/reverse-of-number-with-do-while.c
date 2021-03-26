#include <stdio.h>

void main(void) {
    int rem,s=0,n,t;
    printf("enter the number \n : ");
    scanf("%d",&n);

    t=n;
    do
    {
        rem =n%10;
        s=s*10+rem;
        n=n/10;
    } while (n>0);
    printf("The reverse of %d is %d \n",n,s);
    
}
