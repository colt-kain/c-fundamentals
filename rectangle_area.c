#include <stdio.h>
#include <math.h>

int main()
{
  double length;
  double width;

  printf("Length of the rectangle: ");
  if (scanf("%lf", &length) != 1)
  {
    printf("Wrong format inputted.\nPlease provide a number.\n");
    return 1;
  }

  printf("Width of the rectangle: ");
  if (scanf("%lf", &width) != 1)
  {
    printf("Wrong format inputted.\nPlease provide a number.\n");
    return 1;
  }

  double area;
  if (length == width)
    area = pow(length, 2);
  else
    area = length * width;

  printf("Area of the rectangle: %.2lf\n", area);

  return 0;
}
