/* Programm to calculate the factorial of a positive user input number
by- github.com/theaarzoo */

#include<stdio.h> 

int main() 
{ 
	int n,fact=1,i=1;
	printf("Enter positive number ");
	scanf("%d",&n);
	
	while(i<=n) //1*2*3*4*----n.....i
	{
		fact=fact*i;
		i=i+1;
	}
	printf("Factorial is : %d",fact);
	return 0; 
} 
