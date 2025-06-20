#include <stdio.h>
int main()
{
  float area, radius, circumference;
  printf("Enter the area of circle : ");
  scanf("%f", &radius);

  if (radius <= 0)
  {
    printf("Invalid radius.>0.\n");
  }
  else
  {
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("Area =5.2f\n", area);
    printf("Circumference = %.2f\n", circumference);
  }
  return 0;
}
