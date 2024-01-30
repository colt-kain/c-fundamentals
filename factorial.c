#include <stdio.h>

unsigned long get_factorial(int number)
{
  if (number == 0 || number == 1)
    return 1;

  return number * get_factorial(number - 1);
}

int main()
{
  int number;

  printf("Number: ");
  if (scanf("%d", &number) != 1)
  {
    printf("Wrong format inputted\nPlease provide a number\n");
    return 1;
  }

  if (number < 0)
  {
    printf("Factorial is not defined for negative numbers\n");
    return 1;
  }

  unsigned long factorial = get_factorial(number);

  printf("Factorial: %lu\n", factorial);

  return 0;
}
