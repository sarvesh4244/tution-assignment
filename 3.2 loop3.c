#include<stdio.h>
int main(){
    int a,b,d=1;
    printf("enter the value :");
    scanf("%d",&a);
    for ( b = 1; b <= a; b++)
    {
        d*=b;
    }
    
printf(" %d is the factorial.",d);
    return 0;
}