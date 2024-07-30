#include <stdio.h>

int main()
{
    int age;
    int vippass;

    printf("Enter your age\n");
    scanf("%d", &age);

    if ((age <= 70 && age >= 18) || !(vippass == 1))
    {
        printf("you are between 70 - 18 year, you can drive\n");
    }
    else
    {
        printf("you cannot drive\n");
    }
    return 0;
}
