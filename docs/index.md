# Practical Set 1
## Q1 . Write a program to print HELLO FRIENDS!
```c
#include <stdio.h>

void main() {
  print("HELLO FRIENDS!\n");
}
```




## Q2 . Write a program that reads two nos. from key board and gives their addition,subtraction, multiplication, division and modulo.
`+` = Addition,`-` = substraction,`*` = multiplication,`/` = Division,`%` = Modulo

```c
#include <stdio.h>

void main(void) {
    int n1,n2;

    printf("Please enter first number \n :");
    scanf("%d", &n1);
    printf("Please enter second number \n :");
    scanf("%d", &n2);

    printf("the sum of %d and %d is %d \n", n1,n2,n1+n2);
    printf("the substraction of %d and %d is %d \n", n1,n2,n1-n2);
    printf("the multiplication of %d and %d is %d \n", n1,n2,n1*n2);
    printf("the Division of %d and %d is %f \n", n1,n2,n1/(float)n2);
    printf("the Modulo of %d and %d is %d \n", n1,n2,n1 % n2);
}

```



## Q3 . Write a program to calculate area of circle, use π as symbolic constants.
> instead of `%f` `%.4f` is used to print only 4 decimal places. 
 


```c
#include  <stdio.h>
#define  PI  3.14

void  main(void) {
	int  radius_of_circle;
	float  area_of_circle;
	printf("please enter radius of circle \n : ");

	scanf("%d", &radius_of_circle);
	
	area_of_circle = PI * radius_of_circle * (float)radius_of_circle;
	printf("the area of circle is %.4f", area_of_circle);

}
```
## Q.4 Write a program to convert days into months and days.
```c
#include <stdio.h>
void main(void) {
	   int months,days ;                                    
                                                               
       printf("Enter days \n :") ;                                
       scanf("%d", &days) ;                                    
                                                               
       months = days / 30 ;                                    
       days   = days % 30 ;                                                                                         
       printf("Months = %d \nDays = %d\n",months,days);
       }
```
## Q.5 Write a program which calculates the summation of three digits from the given 3digit number.
```c
#include  <stdio.h>
void  main(void) {
	int  f,m,l,t,sum,num;
	printf("enter a number \n : ");
	scanf("%d", &num);
	l = num % 10;
	t = num / 10;
	m = t % 10;
	f = t / 10;
	sum = l + m + f;
	printf("The sum of %d , %d and %d is %d\n",f,m,l,sum);
}
```
## Q.6 Write a program to demonstrate enumerates data type.
###### [learn more about enum : At geek for geeks](https://www.geeksforgeeks.org/enumeration-enum-c/)

``` c
#include <stdio.h>
enum week{Mon, Tue,  Wed, Thu, Fri, Sat, Sun}
void main(void) {
	enum week day;
	day = sun;
	printf("%d",day);
}
```

## Q.7 Write a program to compute Fahrenheit from centigrade.
> `(32°F − 32) × 5/9 = 0°C`

```c
#include  <stdio.h>

// centigrade to farenhite

void  main() {
	double  centig,faren;
	printf("enter centigrade value : \n");
	scanf("%lf",&centig);
	faren=(centig * 9/5) + 32;
	printf("%lf centigrade = %lf farenhite", centig, faren);
}
```
 
