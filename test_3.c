#include <stdio.h>

int main()
{
    int n;
    printf("enter the table number you want to write\n");
    scanf("%d", &n);

    for (int i = 10; i <= 100; i--)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        if (i == 0)
        {
            break;
        }
    }

    return 0;
}
