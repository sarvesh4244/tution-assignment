#include<stdio.h>
int main(){
    int a;
    printf("enter the number : ");
    scanf("%d",&a);

     
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d: ", a);
    printf("%d, %d, ", first, second);

    while (first + second <= a) {
        next = first + second;
        printf("%d, ", next);
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}