#include<stdio.h>
 int main()
{
 int N;
 printf("Enter N : ");
 scanf("%d" , &N);
 printf("Invalid input\n");
 scanf("%d" , &N);
 for( int i = 1 ; i <= N ; i++)
{
 printf("%d" , i);
}
 printf("\n");
 return 0;
}
 