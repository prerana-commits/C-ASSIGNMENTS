#include<stdio.h>
 int main()
{
  int sum = 0;
  for(int i = 100 ; i <= 150 ; i++)
  {
    sum += i;
  }
  printf("Sum of 100 to 150 = %d\n" , sum);
  return 0;
}