#include<stdio.h>
int main() 
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d %d %d", &a ,&b);
    c= a+b;
    printf("The value of the addition is: %d+%d= %d", a,b,c);

    return 0;
}