#include<stdio.h>
int main()
{
  double num;

  printf("Enter a number : ");
  scanf("%1f" , &num);
  
  if(num>0)
    printf("Positive number\n");
  else if (num < 0)
    printf("Negative number\n");
  else
    printf("Zero\n");

  return 0;
}