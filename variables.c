#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;
  int tmp = 0;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);
  tmp = a;
  a = c;
  c = tmp;
  printf("Difference of %d and %d is %d\n", a, b, c);
}

