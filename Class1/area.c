#include <stdio.h>
#include <math.h>
int main()
{
  float radius, a;

  printf("Enter radius\n");

  scanf("%f", &radius);

  a = 3.1416*radius*radius;

  printf("Area = %.2f\n", a);

  return 0;
}