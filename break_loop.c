#include <stdio.h>

int main()
{
    int a = 0;
    do
    {
        printf("the value of a is %d\n", a);
        a++;
        if (a == 8)
        {
            break;
        }

    } while (a < 10);

    return 0;
}
