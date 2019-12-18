#include <stdio.h>

int main()
{
  int a = 3;
  int b = 0;

  // if statement to test is a is equal to 0
  if (a == b)
  {
    printf("a equal to b\n");
  }
  else
  {
    printf("a is not equal to b\n");
  }

  if (a != b)
  {
    printf("a is not equal to b\n");
  }
  else
  {
  printf("a is not not equal to b\n");
  }

  if (a > b)
  {
    printf("a is greater than b\n");
  }
  else
  {
    printf("a is not greater than b\n");
  }

  if (a >= b)
  {
    printf("a is greater than or equal to b\n");
  }
  else
  {
    printf("a is not greater than or equal to b\n");
  }

  if (a == 0 && b == 0)
  {
    printf("a is equal to 0 and b is equal to 0\n");
  }
  else
  {
    printf("It is not true that a is equal to 0 and b is equal to 0\n");
  }

  if (a == 0 || b == 0)
  {
    printf("a is equal to 0 or b is equal to 0\n");
  }
  else
  {
    printf("Neither a nor b is equal to 0\n");
  }

  if (!(a == 0))
  {
    printf("a is not equal to 0\n");
  }
  else
  {
    printf("a is equal to 0\n");
  } 
}
