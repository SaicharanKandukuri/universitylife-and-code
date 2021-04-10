#include <stdio.h>

void main(void) {
    int value_of_array;

    printf("How many Values you want to enter \n : ");
    scanf("%d", &value_of_array);

    int thearray[value_of_array],i,j,k;

    for (i=1; i<=value_of_array; i++) 
    {
        printf("Enter the number %d \n : ", i);
        scanf("%d", &thearray[i]);
    }

    for (i=1; i<=value_of_array; i++) 
    {
        for (j=i+1; j<=value_of_array; j++) 
        {
            if (thearray[i] > thearray[j]) 
            {
                k=thearray[i];
                thearray[i] = thearray[j];
                thearray[j] = k;
            }
            
        }
    }
    printf("\n-----------\n The Accesdinding ordered numbers \n-----------\n");
    for (i=1;i<=value_of_array;i++) {
        printf("(%d) . %d \n",i,thearray[i]);
    }
}
