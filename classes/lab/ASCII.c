//ASCII.c
#include<stdio.h>
int main(){
char keyword ;
printf("Enter your character:\n");
scanf("%c",&keyword);
printf("%c = %d", keyword, keyword);
if(keyword >= 65 && keyword <= 90)
    {
        printf(" This is a upper case alphabet\n");
    }
else if(keyword >=97 && keyword <=122)
    {
        printf(" This is a lower case alphabet\n");
    }
 else if(keyword >=0 && keyword <= 47 || keyword>=58 && keyword<= 64 || keyword>=91 &&keyword<=96|| keyword>=123 &&keyword<= 127 )
    {
        printf("This is a special character\n");
    }
else if(keyword >=48 && keyword <=57)
    {
        printf(" This is a number\n");
    }
}