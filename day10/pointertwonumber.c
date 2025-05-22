#include <stdio.h>

int main()
{
    int a=5,b=10;
    printf("%d %d",a,b);
    swap(&a,&b);//1000,2000
    printf("\n%d %d",a,b);
    return 0;
}