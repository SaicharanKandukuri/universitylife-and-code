// A code by saicharan
//Q Make a code to find the sum of give three digit number without using loop 
#include <stdio.h>

void main(void) {
    int num;
    int f,m,l,t,sum;

    printf("enter a number \n : ");
    scanf("%d", &num);

    l = num % 10;
    t = num / 10;
    m = t % 10;
    f = t / 10;

    sum = l + m + f;
    printf("The sum of %d , %d and %d  is %d\n",f,m,l,sum);
}
