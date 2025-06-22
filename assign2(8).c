#include<stdio.h>
 int main()
{
  char c;

  printf("Enter a lowercase alphabet : ");
  scanf("%c" , &c);

  if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    printf("%c is a vowel.\n" , c);
  else if( c >= 'a' && c <= 'z')
    printf("%c is a consonant.\n" , c);
  return 0;
}