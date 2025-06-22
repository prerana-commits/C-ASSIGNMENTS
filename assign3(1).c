#include <stdio.h>
int main(void)
{
  int d;
  printf("Enter a single digit (0-9) : ");
  if (scanf("%d", &d) != 1)
  {
    printf("Invalid input.\n");
    return 1;
  }
  if (d < 0 || d > 9)
  {
    printf("Error : digit must be between 0 and 9.\n");
  }
  else
  {
    switch (d)
    {
    case 0:
      printf("Zero.\n");
      break;
    case 1:
      printf("One.\n");
      break;
    case 2:
      printf("Two.\n");
      break;
    case 3:
      printf("Three.\n");
      break;
    case 4:
      printf("Four.\n");
      break;
    case 5:
      printf("Five.\n");
      break;
    case 6:
      printf("Six.\n");
      break;
    case 7:
      printf("Seven.\n");
      break;
    case 8:
      printf("Eight.\n");
      break;
    case 9:
      printf("Nine.\n");
      break;
    }
  }
  return 0;
}