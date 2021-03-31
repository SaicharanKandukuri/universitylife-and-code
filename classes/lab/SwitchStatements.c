 #include<stdio.h>
int main(){
    char operator;
    int num1, num2;
    printf("Enter your operator: ");
    scanf("%c",&operator);    
    printf("Enter your num1: ");
    scanf("%d",&num1);
    printf("Enter your num2: ");
    scanf("%d",&num2);

    switch (operator)
    {
    case '+':
        printf("sum = %d",num1+num2);
    break;
    case '-':
        printf("differnce = %d",num1-num2);
    break;
    case '%':
        printf("Mod = %d",num1%num2);    
    break;
    case '*':
        printf("%d",num1*num2);
    case '/':
        printf("%d",num1/num2);
    break;
    }

}    
