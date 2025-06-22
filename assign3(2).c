#include <stdio.h>
int main()
{
  int result;
  double a, b;
  char op;

  printf("Enter expression : ");
  if (scanf("%1f %c %1f", &a, &op, &b) != 3)
    ;
  printf("Invalid input format:");
  scanf("%1f %c %1f", &a, &b);

  switch (op)
  {
  case '+':
    result = a + b;
    break;
  case '-':
    result = a - b;
    break;
  case '*':
    result = a * b;
  case '/':
    if (b == 0)
    {
      printf("Error:division by zero!");
    }
    result = a / b;
    break;
  default:
    printf("error:invalid operator'%c'.\n", op);
  }
  printf("Result:%.2f\n",result);
  return 0;
}