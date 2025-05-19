#include <stdio.h>

int main()
{
int num;
scanf("%d",&num);
switch(num){
    case 1:
    printf("sunday");
    break;
    case 2:
    printf("monday");
    break;
    case 3:
    printf("wednesday");
    break;
    case 4:
    printf("thursday");
    break;
    case 5:
    printf("friday");
    break;
case 6:
printf("saturday");
    break;
    default:
    printf("print something");
    break;
}
    return 0;
}