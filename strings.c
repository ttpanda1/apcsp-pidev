#include <stdio.h>
#include <string.h>



int main()
{
  // str1 is a pointer to a constant - cannot change the contents of str1
  char* str1 = "hello1";
  
  printf("str1 : %s\n", str1);

  // DO NOT DO THIS - attempt to modify a character in a string constant
  //   compiler will not complain though
  //*(str1 + 3) = 'c';


  
  // str2 is an array which holds a copy of the string constant
  char str2[7] = "hello2";
  
  printf("str2 : %s\n", str2);

  char* str2p = str2;
  *(str2p + 3) = 'c';  // OK to modify array
  printf("str2 : %s\n", str2p);
  

  
  // str3 is also an array which holds a copy of the constant
  //   intialized to hold the string length
  char str3[] = "this is a test";
  printf("str3 : %s\n", str3);

  str3[3] = 'f';
  printf("str3 : %s\n", str3);

  char alph1[] = "abcdefghijklmnopqrstuvwxyz";

  char alph2[30];

  for (int i = 0; i < 26; i++)
  {
    alph2[i] = 'a' + i;
  }

  alph2[26] = '\0';

  if (strcmp(alph1, alph2) == 0)
  {
    printf("The stings are identical\n");
  }
  else
  {
    printf("The strings are different\n");
  }

  for (int i = 0; i < 26; i++)
  {
    alph2[i] = alph2[i] - 32;
  }

  if (strcmp(alph1, alph2) == 0)
  {
    printf("The stings are identical\n");
  }
  else
  {
    printf("The strings are different\n");
  }

  char alph3[100];

  strcpy(alph3, alph1);
  strcat(alph3, alph2);

  printf("String 1: %s\nString 2: %s\nString 3: %s\n", alph1, alph2, alph3);
}
