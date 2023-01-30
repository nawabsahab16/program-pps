#include<stdio.h>
#include<conio.h>
int main() 
{
    float r, area, circum;
    clrscr();
    printf("\n Enter the radius of circle: ");
    scanf("%f", &r);
    area=3.14*r*r;
    circum=2*3.14*r;

    printf("Area of Circle :%f \n Circumference of a circle: %f\n", area, circum);
    getch();
    return 0;
}