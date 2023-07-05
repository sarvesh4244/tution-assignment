#include<stdio.h>
int main(){
    int a [5]={1,5,6,2};
    int s,gt=a[0],n;
    for (s=1;s<=3;s++){
        n=a[s];
        if (n>gt)
        {
            gt=n;
        }
        
    }
    printf("%d is greater than all.",gt);
    return 0;
}