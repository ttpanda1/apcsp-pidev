#include <stdio.h>

float a;
float r = 3.5;
float PI = 3.141593;

float areaOfCircle(float r)
{
  a = r*r*PI;
  return a;
}

int main()
{
  for ( r = 3.5; r < 13.5; r++ )
  {
    a = areaOfCircle(r);
    printf("Radius = %f, Area = %f\n", r, a);
  }
}
