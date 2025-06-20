#include<stdio.h>
 int main()
{
  float a , b , am , hm ;

  printf("Enter two numbers : ");
  scanf("%f%f" , &a , &b);

  am = (a * b) / 2;
  hm = (a * b) / (a + b);

  printf("Arithmetic mean = %.2f\n" , am);
  printf("Harmonic Mean = %.2f\n" , hm);

  return 0;
}