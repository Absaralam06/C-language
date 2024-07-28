#include <stdio.h>
float avg(int a, int b, int c);

int main()
{
    int a,b,c;
    printf("Enter the 1st number\n");
    scanf("%d", &a);

    printf("Enter the 2nd number\n");
    scanf("%d", &b);

    printf("Enter the 3rd number\n");
    scanf("%d", &c);

    printf("Average of these three number is %0.2f\n",avg(a,b,c));
    return 0;
}

float avg(int a, int b, int c){
    float avg;
    avg = (float)(a + b + c)/3;
    return avg;
}