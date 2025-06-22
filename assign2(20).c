#include<stdio.h>
 int main()
{
  char ch;
  printf("Enter a character : ");
  scanf("%c" , &ch);

  if(ch >= '0' && ch <= '9')
     printf("Enter a alphabet.\n", ch);
  else if(ch >= 'a' && ch <= 'z')
    printf("%c is a lowercase latter.\n" , ch);
  else (ch >= 'A' && ch <= 'Z')
    printf("%c is an uppercase latter.\n" , ch);
  return 0;

}