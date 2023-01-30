#include<stdio.h>
void main() {
    float sum, count;
    float mean;

    printf("Enter the valuev of sum and count\n ");
    scanf("%f %f", &sum ,&count);

    mean=sum/count;

    printf("The value of mean is :%f\n", mean);
    printf("The value of mean is : %d\n", (int)mean);
}