#include<stdio.h>
int main()
{
  float radius , area , cf;
  printf("enter the radius of the circle : ");
  scanf("%f",&radius);
  cf=2*3.14*radius;
  printf("the circumference of the circle is %f",cf);
  area=3.14*radius*radius;
  printf("\narea of the circle is %f");
  return 0;
}