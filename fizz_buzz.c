#include <stdio.h>

#define FIZZ_MULTIPLE 3
#define BUZZ_MULTIPLE 5

int main()
{
  printf("--- FIZZ BUZZ ---\n");

  int upper_limit;

  printf("Input the upper limit: ");
  if (scanf("%d", &upper_limit) != 1)
  {
    printf("Wrong format inputted.\nPlease provide a positive integer.\n");
    return 1;
  }

  if (upper_limit <= 1)
  {
    printf("Please provide an upper limit higher than 1 (the lower limit).\n");
    return 1;
  }

  for (int i = 1; i <= upper_limit; i++)
    if (i % FIZZ_MULTIPLE == 0 && i % BUZZ_MULTIPLE == 0)
      printf("- FizzBuzz!!!\n");
    else if (i % FIZZ_MULTIPLE == 0)
      printf("- Fizz!\n");
    else if (i % BUZZ_MULTIPLE == 0)
      printf("- Buzz!\n");
    else
      printf("- %d\n", i);

  return 0;
}
