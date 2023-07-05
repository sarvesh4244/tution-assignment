#include <stdio.h>
int main()
{
    int a[11];
    int i, s;
    int odd, even, oddtot, sum7;
    for (i = 1; i < 11; i++)
    {
        printf("enter the value of %d: ", i);
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        printf(" %d \n",a[i]);
    }
    
    for (int j = 0; j < 10; j++)
    {
        s = a[i];
        
        if (s % 2 == 0)
        {
            printf(" %d is even number.\n", s);
            even+=1;
        }
        else
        {
            printf(" %d is odd number.\n", s);
            odd+=1;
            oddtot += s;
        }
        if (i <= 6)
        {
            sum7 = sum7 + s;
        }
        else{
            continue;
        }
    }
    printf("sum of seven number is %d\n", sum7);
    printf("sum of odd number is %d\n", oddtot);
    printf("total even numbers are %d\n", odd);
    printf("total odd numbers are %d\n", even);

    return 0;
}