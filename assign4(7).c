#include <stdio.h>
int main()
{
  int sum = 0;
  for (int i = 1; i <= 5; i++)
  {
    sum += i;
  }
  printf("sum of 1 to 5 = %d\n", sum);
  return 0;
}