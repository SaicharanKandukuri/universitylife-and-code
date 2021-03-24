/* Q- Write a programm to comapre 3 numbers by user input & print the largest number
 by- github.com/theaarzoo */

#include <stdio.h>
int main() {
    double n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3); //lf : long float

    if (n1 >= n2) {
        if (n1 >= n3)
            printf("%.2lf is the largest number.", n1); //.2lf: It'll print decimal values to 2 places only
        else
            printf("%.2lf is the largest number.", n3);
    } else {
        if (n2 >= n3)
            printf("%.2lf is the largest number.", n2);
        else
            printf("%.2lf is the largest number.", n3);
    }

    return 0;
}