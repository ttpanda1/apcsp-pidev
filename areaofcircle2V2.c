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

  if ( argc >= 3 ) {
    if ( argv[2] > argv[1] ) {
      t = 0;
    }
  }
  else {
    printf("Not a valid Number. Please enter a valid number.\n");
  }

  if ( t = 1 ) {
    printf("Lower limit: ");
    while (1)
    {
      fgets(input1, 256, stdin);
      if (sscanf(input1, "%f", &lowerLimit) == 1) {
        if ( lowerLimit > 0 ) {
	  break;
        }
      }
      printf("Not a valid Number. Please enter a valid number.\n");
    }

    printf("Upper limit: ");
    while (1)
    {
      fgets(input2, 256, stdin);
      if (sscanf(input2, "%f", &upperLimit) == 1) {
        if ( upperLimit > lowerLimit) {
	  break;
        }
      }
      printf("Not a valid Number. Please enter a valid number.\n");
    }
  }
  else {
    sscanf( argv[1], "%f", &lowerLimit);
    sscanf( argv[2], "%f", &upperLimit);
  }

  for ( r = lowerLimit; r <= upperLimit; r++ )
  {
    a = areaOfCircle(r);
    printf("Radius = %f, Area = %f\n", r, a);
  }
}
