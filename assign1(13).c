#include<stdio.h>
  int main()
{
  char ch;
  printf("Enter a character : ");
  scanf("%c" , &ch);

  printf("ASCII value %c is %d\n" , ch,(int)ch);

  return 0;
}