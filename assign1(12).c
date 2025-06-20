#include<stdio.h>
 int main()
{
  char ch;

  printf("enter a character : ");
  scanf("%c",&ch);
  printf("the previous cjaracter is %c\n",ch+1);
  return 0;
}