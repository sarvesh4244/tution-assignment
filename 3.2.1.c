#include <stdio.h>
int main()
{
    int a = 2, b = 5;
    printf("befor swaping : %d , %d\n",a,b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swaping : %d  %d ",a,b);
    return 0;
}