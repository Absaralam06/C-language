#include <stdio.h>
int area(int a);

int main()
{
    int a;
    a = area(7);
    printf("area of square is %d\n",a);
    return 0;
}

int area(int a){
    int area;
    area = a*a;
    return area;
}