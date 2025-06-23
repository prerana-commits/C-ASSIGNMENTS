#include<stdio.h>
 int main()
{
  int x , y , sum=0 ;
  printf("Enter x and y : ");
  if(scanf("%d%d" , &x , &y)!= 2 || x > y)
  {
    printf("Invalid input\n");
    scanf("%d" , &x , &y);
  }
  for (int i = x ; i <= y ; i++)
  {
  sum += i;
  }
  printf("Sum from %d to %d = %d\n" , x , y , sum);
  return 0;
}