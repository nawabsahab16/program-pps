#include<stdio.h>
#include<coion.h>

void main() {
    int n,number, r, result=0;
    clrscr();

    printf("Enter a positive integer :");
    scanf("%d", &n);

    number=n;

    while(number!=0)
    {
        r=number % 10;
        result=result(r*r*r);

        number=number/10;

    }

    
    if(result==n)
    printf("%d is an Armstrong number", n);
    else
    printf("%d is not an Armstrong number", n);

    getch();
    



}