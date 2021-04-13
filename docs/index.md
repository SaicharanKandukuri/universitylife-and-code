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
# Parctical Set: 2
## Q1 . Write a program to find the largest of the three nos. using Nested-If-Else statement.
```c
#include  <stdio.h>

void  main(void)  {
double  n1,  n2,  n3;
printf("Enter the first number \n :");
scanf("%lf", &n1);

printf("Enter the second number \n :");
scanf("%lf",&n2);

printf("Enter the third number \n :");
scanf("%lf",&n3);

if  (n1 >= n2 && n1 >= n3)
	printf("%.2f is the largest number.",  n1);
else  if  (n2 >= n1 && n2 >= n3)
			printf("%.2f is the largest number.",  n2);
	else  if  (n3 >= n1 && n3 >= n2)
						printf("%.2f is the largest number.",  n3);

}
```

## Q2 . Write a C program to enter a character and to check whether it is a small letter or it is a capital letter or it is a digit or it is a special symbol.

```c
#include  <stdio.h>

void  main(void)  {

char  input_char;

printf("please enter a letter \n :");
scanf("%c", &input_char);

if  ((  ("%d",  input_char) >= 65  ) && (  ("%d",  input_char) <= 90))  {

printf("the entered %c letter is capital letter \n",input_char);

}
else  if  (("%d",  input_char) >= 97 && ("%d",  input_char) <= 122)  {
		printf("the entered letter %c is a small letter \n",input_char);
	}
else  if  (input_char >= '0' && input_char <= '9')

	{
		printf("the charecter %c is a number",input_char);

	}
else
	{
		printf("the entered %c cahrecter is a special charecter \n",input_char);

	}

}
```
## Q3 . Write a program using while loop construct which finds the factorial of a given integer number.

```c
#include  <stdio.h>

void  main()  {

	int  n,i,f;
	f=i=1;
	printf("Enter a Number to Find Factorial: ");
	scanf("%d",&n);

	while(i<=n) {
		f*=i;
		i++;
	}
	printf("The Factorial of %d is : %d",n,f);
}
```

## Q4 . Write a C program using do…while and for loop constructs to reverse the digits of the number
```c
#include<stdio.h>
void  main() {
	int  n,a,r,s;
	printf("Enter a Number \n : ");

	scanf("%d",&n);
	a=n;
	do
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}  while(n>0);
	printf("\n The Reverse Number of %d is %d",a,s);

}
```

## Q5 . Write a program to demonstrate use of Switch- Break Statement

```c
#include  <stdio.h>

int  main() {
	char  operator;
	double  n1, n2;
	printf("Enter an operator (+, -, *, /): ");
	scanf("%c", &operator);
	printf("Enter two operands: ");
	scanf("%lf %lf",&n1, &n2);
	switch(operator) {
		case  '+':
			printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
		break;
		case  '-':
			printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
		break;
		case  '*':
			printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
		break;
		case  '/':
			printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
		break;
		// operator doesn't match any case constant +, -, *, /
		default:
			printf("Error! operator is not correct");
	}
		return  0;
}
```

## Q6 . Write a program to print the following outputs using for Loop. `1 12 123`
```c
#include<stdio.h>
void  main() {
	int  n, c, d, num = 1, space;
	printf("Enter a number\n");
	scanf("%d",&n);
	space = n - 1;
	for ( d = 1 ; d <= n ; d++ ) {
		num = d;
		for ( c = 1 ; c <= space ; c++ ) {
			printf(" ");
			space--;

	}

		for ( c = 1 ; c <= d ; c++ ) {
			printf("*");
			num++;
		}
	num--;
	num--;
		for ( c = 1 ; c < d ; c++) {
			printf("*");
			num--;
		}
	printf("\n");
	}
}
```
# Practical set: 3
## Q2 . Write a program which sorts 10 numbers into ascending order.
```c
#include  <stdio.h>

void  main(void)  {
	int  value_of_array = 10;
	int  thearray[value_of_array],i,j,k;
	for  (i=1;  i<=value_of_array;  i++)
	{
		printf("Enter the number %d \n : ",  i);
		scanf("%d", &thearray[i]);
	}
	
	for  (i=1;  i<=value_of_array;  i++)
	{

		for  (j=i+1;  j<=value_of_array;  j++)
		{
			if  (thearray[i] > thearray[j])
			{
				k=thearray[i];
				thearray[i] = thearray[j];
				thearray[j] = k;
			}
			
		}
		
	}

	printf("\n-----------\n The Accesdinding ordered numbers \n-----------\n");
	for  (i=1;i<=value_of_array;i++)  {
		printf("(%d) . %d \n",i,thearray[i]);
	}

}
```
 
