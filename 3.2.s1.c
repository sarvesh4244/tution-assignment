#include <stdio.h>
int main()
{
    char ab;
    char vov[10] = {'a', 'e', 'i', 'o', 'u'};

    printf("enter the word : ");
    scanf("%c", &ab);
    for (int i = 0; i < 5; i++)
    {
        char a;
        a = vov[i];
        if (ab == a)
        {
            printf("the number is vovel.");
            break;
        }
        if (i == 4)
        {
            printf("the word is  not a vovel");
            break;
        }
    }

    return 0;
}