# C [4/6/21]
# Operators 

## Relational Operators
`==` Equals


`!=` Not equals


`<` less than


`>` Greater than


`<=` Less than or equals to


`>=` Greater Than or equals to



## if statements
###### syntax :
```c
if (condition)
    // statement(1); code
else
    // statement(2); code
```
if conditon is `true` then statement 1 is executed otherwise statement 2 is executed.

##### Program to find biggest number in given two numbers
```c
#include <stdio.h>
#include <conio.h>

void main() {
    float num1,num2;
    clrscr();
    printf("Enter one numbers");
    scanf("%f",&num1);
    printf("Enter number two");
    scanf("%f", &num2);
    if (num1 > num2)
        printf("%f is larger \n",num1);
    else
        printf("%f is greater",num2);
} 
```
## Logical Operators

## Assignment Operator
`=`
```c
variable = expression;
//       ^
```

###### program using shorthand notation
```c
#include <stdio.h>
void main() {
    int a;
    printf("Give the value a \n");
    scanf("%d",&a);
    a += 5; // a = a+5 
    printf("a= %d"a); 

    a -= 5;
    print("a=%d \n",a);
    a*=5;
    print("a=%d \n",a);
    a/=5;
    print("a=%d \n",a);
    a%=5;
    print("a=%d \n",a)
}
```
