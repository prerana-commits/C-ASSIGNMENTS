#include <stdio.h>
#define PI 3.14
int main()
{
  double r;
  int choice;

  printf("Enter radius : ");
  scanf("%1f", &r);
  printf("Invalid radius : ");

  printf("\nMenu:\n");
  printf("1:Area of Circle\n");
  printf("2:Circumference of Circle\n");
  printf("4.Volume of Sphere\n");
  printf("Enter your choice (1-3):");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    printf("Area of circle=%.4f\n", PI * r * r);
    break;
  case 2:
    printf("Circumference=%.4f\n", 2 * PI * r);
    break;
  case 3:
    printf("Volume of sphere=%.4f\n", (4.0 / 3.0) * PI * r * r * r);
    break;
  default:
    printf("Invalid choice.\n");
  }
  return 0;
}