#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    // one liner if-else statement 
    (num >= 5) ? printf("the number is higher than 5") : printf("The number is less than 5");
    return 0;
}
