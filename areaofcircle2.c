#include <stdio.h>

float a;
float r = 3.5;
float PI = 3.141593;

float lowerLimit;
char input1[256];

float upperLimit;
char input2[256];

float areaOfCircle(float r)
{
  a = r*r*PI;
  return a;
}

int main(int argc, char* argv[])
{
  int t = 1;

  if ( argc == 3 ) {

    if (sscanf( argv[1], "%f", &lowerLimit) == 0 || sscanf( argv[2], "%f", &upperLimit) == 0 ) {
      printf("Please provide correct number parameters.\r\n");
    }
    else {
      if ( upperLimit > lowerLimit ) {
	t = 0;
      } else {
	printf("Upper limit should be greater than lower limit.\r\n");
      }
    }
  }
  else if ( argc != 1 ) {
    printf("Invalid number of parameters.\n");
  }

  if ( t == 1 ) {
    while (1)
    {
      printf("Lower limit: ");
      fgets(input1, 256, stdin);
      if (sscanf(input1, "%f", &lowerLimit) == 1) {
        if ( lowerLimit > 0 ) {
	  break;
        }
      }
      printf("Not a valid Number. Please enter a valid number.\n");
    }

    while (1)
    {
      printf("Upper limit: ");
      fgets(input2, 256, stdin);
      if (sscanf(input2, "%f", &upperLimit) == 1) {
        if ( upperLimit > lowerLimit) {
	  break;
        }
      }
      printf("Not a valid Number. Please enter a valid number.\n");
    }
  }

  for ( r = lowerLimit; r <= upperLimit; r++ )
  {
    a = areaOfCircle(r);
    printf("Radius = %f, Area = %f\n", r, a);
  }
}
