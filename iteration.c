#include <stdio.h>



int main()
{
  int div = 3;

  for (int i = 0; i < 100; i++)
  {
    if (i % div == 0)
    {
      printf("%d\n", i);
    }
  }
}
