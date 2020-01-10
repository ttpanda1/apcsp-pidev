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
  char input1[256], lim1[256];

  printf("Lower Limit: ");
  fgets(input1, 256, stdin);
  sscanf(input1, "%s", lim1);

  printf("Lower Limit: %s\n", lim1);

  char input2[256], lim2[256];

  printf("Uper Limit: ");
  fgets(input2, 256, stdin);
  sscanf(input2, "%s", lim2);

  printf("Upper Limit: %s\n", lim2);
  
  float s = lim1;
  float l = lim2;

  for ( r = 3.5; r <= 12.5; r++ )
  {
    a = areaOfCircle(r);
    printf("Radius = %f, Area = %f\n", r, a);
  }
}
