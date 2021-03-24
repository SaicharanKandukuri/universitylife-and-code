/* Ascii values */
#include <stdio.h>

void main(void) {
  /* a variable to store data for user inupt */
    char input_char;

    printf("please enter a letter \n :");
    scanf("%c", &input_char);
  
     /* link to ascii valuse table : https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html */
  
    if (( ("%d", input_char) >= 65 ) && ( ("%d", input_char) <= 90)) {
        printf("the entered %c letter is capital letter \n",input_char);
    }
    else if (("%d", input_char) >= 97 && ("%d", input_char) <= 122) {

        printf("the entered letter %c is a small letter \n",input_char);
    }
    else if (input_char >= '0' && input_char <= '9')
    {
       printf("the charecter %c is a number",input_char);
    }
    else
    {
        printf("the entered %c cahrecter is a special charecter \n",input_char);
    }
    

}
