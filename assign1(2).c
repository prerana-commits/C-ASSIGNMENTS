#include<stdio.h>
 int main()
{
  float SA , D , pi = 3.14 , V , H ;
  printf("enter diamention and height of cylinder : ");
  scanf("%f" "%f" , &D , &H);
  SA = 2*pi*D+2+pi*D/2*H ;
  printf("surface area of cylinder is : %f" , SA);
  V = pi * D * H ;
  printf("\nvolume of cylinder is : %f", V);

  return 0 ;
}