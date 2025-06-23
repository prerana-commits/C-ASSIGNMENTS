#include<stdio.h>
 int main()
{
  int N;
  printf("Enter n : ");
  if (scanf("%d",&N) != 1 || N<1) 
  {
    printf("invalid input\n");
    scanf("%d" , &N);
  }
  int sum = 0;
  for(int i = 1 ; i <= N ; i++)
  {
    sum += i;
  }
  printf("Loop sum of 1 to %d = %d\n" , N , sum);
  return 0 ;
}