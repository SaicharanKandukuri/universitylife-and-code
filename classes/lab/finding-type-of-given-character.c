/* Ascii values */
// A Code by @saicharanKandukuri https://github.com/saicharankandukuri
// Given Question

/* Write a C program to enter a charecter and to check weather it is a small lettr or a it is a capital
letter or it is a digit or it is a special number */
  
  // logic :
   // what ever you enter code takes only first charcter from input
  /* when we try to convert a char into a integer with %d it return ascii value  so ("%d",input_char) does the magic here with if & else */

#include <stdio.h>

void main(void) {
  /* a variable to store data for user inupt */
    char input_char;

    printf("please enter a letter \n :");
    scanf("%c", &input_char);
  
     /* link to ascii valuse table : https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html */

    // The ascii values of captital alphabets are from 65 to 90 so
    if (( ("%d", input_char) >= 65 ) && ( ("%d", input_char) <= 90)) {
        printf("the entered %c letter is capital letter \n",input_char);
    }
    // if above returns false then next time to check is it small alphabet (97 - 122)
    else if (("%d", input_char) >= 97 && ("%d", input_char) <= 122) {

        printf("the entered letter %c is a small letter \n",input_char);
    }
    // as we cant do the magic for number and special charcters we use condition like below 
    else if (input_char >= '0' && input_char <= '9')
    {
       printf("the charecter %c is a number",input_char);
    }
  // after alphabets and numbers the left ones are special charcters so we just use else so that if all the above condition return false then it is a speciall charecter
    else
    {
        printf("the entered %c cahrecter is a special charecter \n",input_char);
    }
    

}
