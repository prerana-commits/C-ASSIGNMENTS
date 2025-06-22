#include<stdio.h>
 int main()
{
  int N;
  printf("Enter how many times to print hello : ");
  scanf("%d" , &N);
  for(int i = 0 ; i < N ; i++)
  printf("hello\n");
  return 0;
}