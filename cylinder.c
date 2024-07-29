#include <stdio.h>

int main()
{
    int r,h;
    int pie = 3.14;
    int vol;
    printf("enter the value of radius of cylider\n");
    scanf("%d", &r);

    printf("enter the value of height of cylider\n");
    scanf("%d", &h);

    vol = pie*r*r*h ; 
    printf("volume = %d cm-cube\n",vol);

    printf("liter = %d\n", (vol/1000));

    return 0;
}
