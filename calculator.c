#include <stdio.h>

int main()
{
  double num1;
  double num2;

  printf("First number: ");
  if (scanf("%lf", &num1) != 1)
  {
    printf("Wrong format inputted.\nPlease provide a number.\n");
    return 1;
  }

  printf("Second number: ");
  if (scanf("%lf", &num2) != 1)
  {
    printf("Wrong format inputted.\nPlease provide a number.\n");
    return 1;
  }

  // Clear the input buffer
  while (getchar() != '\n');

  char operation_symbol;

  printf("Operation (+; -; *; /): ");
  if (scanf("%c", &operation_symbol) != 1)
  {
    printf("Wrong format inputted.\nPlease provide a character.\n");
    return 1;
  }

  double result;

  switch (operation_symbol)
  {
    case '+':
      result = num1 + num2;
      break;

    case '-':
      result = num1 - num2;
      break;

    case '*':
      result = num1 * num2;
      break;

    case '/':
      if (num2 == 0)
      {
        printf("Division by zero is not possible.\n");
        return 1;
      }

      result = num1 / num2;
      break;

    default:
      printf("Please provide a valid operation symbol.\n");
      return 1;
  }

  printf("Result: %.2lf\n", result);

  return 0;
}
