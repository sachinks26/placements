#include <stdio.h>

int main()
{
  int s[]={1,2,3,4,5,6};//' \0
  int *str=s;
  int n= sizeof(s)/sizeof(s[0])
  reverse(s,n);
  for (int i=0;i<n;i++){
      printf("%d",*str);
      str+++;
  }
}