#include <stdio.h>

int main()
{
    int phy, math, chem;
    float total;

    printf("Enter your phy marks\n");
    scanf("%d", &phy);

    printf("Enter your math marks\n");
    scanf("%d", &math);

    printf("Enter your chem marks\n");
    scanf("%d", &chem);

    total = (phy + math + chem) / 3;

    if ((total < 40) || math < 33 || phy < 33 || chem < 33)
    {
        printf("You'r percent is %f and you are fail\n", total);
    }
    else
    {
        printf("You'r percent is %f and you are pass\n", total);
    }
    return 0;
}
