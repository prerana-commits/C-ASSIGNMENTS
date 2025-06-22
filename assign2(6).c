#include<stdio.h>
 int main()
{
  int num;
  printf("Enter an integer : ");
  scanf("%d" , &num);

  if(num % 5 == 0 || num % 7 == 0)
     printf("%d id divisible by 5 or 7.\n" , num);
  else 
     printf("%d is not divisible by 5 or 7.\n" , num);

  return 0;
}