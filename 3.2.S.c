#include <stdio.h>
int main()
{
    int a;
    printf("enter the number : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wednsday");
        break;
    case 4:
        printf("tuesday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("sturday");
        break;
    case 7:
        printf("sunday");
        break;

    default:
        printf("enter the number between 1 to 7.");
        break;
    }
    return 0;
}