#include<stdio.h>

int main()
{ 
  int a = 545;
  char b = 'b';
  float c = 5.13579;
  double d = 5.1357913579; 
  signed int e = -53;
  unsigned short int f = 135;

  // print value and size of an int variable

  printf("int a value: %d, and size: %d bytes\n", a, sizeof(a));
  printf("char b value: %c, and size: %d bytes\n", b, sizeof(b));
  printf("float c value: %f, and size: %d bytes\n", c, sizeof(c));
  printf("double d value: %f, and size: %d bytes\n", d, sizeof(d));
  printf("signed int e value: %d, and size: %d bytes\n", e, sizeof(e));
  printf("unsigned short int f value: %d, and size: %d bytes\n", f, sizeof(f));
}

