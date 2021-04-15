#include <stdio.h>

void main(void) {
    int days;

    printf("please enter day number \n : ");
    scanf("%d",&days);

    if (days <= 7 )
    {
        if ( days == 1) {
            printf("Sunday");
        }
        else if (days == 2)
        {
            printf("Monday");
        }
        else if (days == 3)
        {
            printf("Tuesday");
        }
        else if (days == 4)
        {
            printf("Wednesay");
        }
        else if (days == 5)
        {
            printf("Thursday");
        }
        else if (days == 6)
        {
            printf("friday");
        }
        else if (days == 7)
        {
            printf("Saturday");
        }

    }
    else {
        printf("The Given input \" %d \" is invalid please enter number between 1- 7 ",days);
        main();
    }
    
    
}
