#include<stdio.h>
 int main()
{
 int a , b , c ;
 printf("Enter three integer (a b c) : ");
 scanf("%d %d %d" , &a , &b , &c);

 if ( a > b && a < c)
    printf("%d is between %d.\n" , a , b , c);
 else if( a > c && a < b)
    printf("%d is between %d and %d.\n" , a , c , b);
 else
    printf("%d is not betwwwn %d and %d.\n" , a , b , c);
  return 0;
}