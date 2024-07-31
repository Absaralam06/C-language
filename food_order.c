#include <stdio.h>

int main()
{
    char food;
    printf("Please select your food which you want to order:\n");
    printf("1. dal chawal\n");
    printf("2. chicken roll\n");
    printf("3. kawab\n");
    printf("4. biryani\n");
    
    // Use getchar() to read a single character input
    food = getchar();

    switch (food)
    {
    case '1':
        printf("Your order is dal chawal.\n");
        break;
    
    case '2':
        printf("Your order is chicken roll.\n");
        break;

    case '3':
        printf("Your order is kawab.\n");
        break;

    case '4':
        printf("Your order is biryani.\n");
        break;

    default:
        printf("Invalid order.\n");
        break;
    }
    return 0;
}
