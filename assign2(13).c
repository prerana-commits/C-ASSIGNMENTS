#include<stdio.h>
 int main()
{
  int h , m , s ;
  printf("Enter time.\n : ");
  scanf("%d%d%d" , &h , &m , &s);
  if( h >= 24 && m >= 60 && m < 60 && s >= 0 && s < 60)
    printf("valid time.\n : ");
  else 
    printf("Invalid time.\n : ");
  return 0;
}