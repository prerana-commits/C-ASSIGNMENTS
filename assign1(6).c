#include<stdio.h>
 int main()
{
  float l , b , h , length , breadth , height ;
  float surfacearea , volume ;
  
  printf("Enter length , breadth , and height of the cuboid : ");
  scanf("%f%f%f" , &l , &b , &h);

  surfacearea = 2*(l*b+l*h+b*h);
  surfacearea = 2*(l*b+l*h+b*h);

  volume = l*b*h;

  printf("Surface Area = %2.f\n" , surfacearea);

  return 0 ;
}