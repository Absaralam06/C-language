#include <stdio.h>

int main()
{
    int a = 1,n;
    printf("Enter the number of table you want to wrire here\n");
    scanf("%d",&n);

    while (a<=11)
    {
        printf("%d X %d = %d\n",n,a,a*n);
        ++a;
        if (a==0)
        {
            break;
        }
        
    }
    

    return 0;
}
