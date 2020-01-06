#include <ctype.h>
#include <stdio.h>

int isAWord(int i, char * string)
{
  if(isalpha(string[i]) && isalpha(string[i+1]) && !isalpha(string[i- 1]))
  {
    return 1;
  }

  else
  {
    return 0;
  }
}

void toUpper(char * string, int n)
{
  int i;
  int count = 0;

  for(i=0; string[i] != '\0'; i++)
  {
    if(isAWord(i, string))
    {
      count++;
    }
  }

  printf("After attempting word %d: %s\n", n, string);
}


int main(void)
{
  char test1[] = "Jim Ries...Is1234Cool\0";
  char test2[] = "cs1050is great\0";
  char test3[] = "\0";
  char test4[] =  "!!!3123Once\tThere_was a way\nto^get((back))homeward.123\n\0";

  printf("***ORIGIBAL TEST STRING #1: %s***\n", test1);
  toUpper(test1, 0);
  printf("The 0 word was not found in string!\n");
  toUpper(test1, 3);
  toUpper(test1, 5);
  toUpper(test1, 7);
  printf("\n");

  printf("***ORIGIBAL TEST STRING #2: %s***\n", test2);
  toUpper(test2, 0);
  printf("The 0 word was not found in string!\n");
  toUpper(test2, 3);
  toUpper(test2, 5);
  toUpper(test2, 7);
  printf("\n");

  printf("***ORIGIBAL TEST STRING #3: %s***\n", test3);
  toUpper(test3, 0);
  printf("The 0 word was not found in string!\n");
  toUpper(test3, 3);
  toUpper(test3, 5);
  toUpper(test3, 7);
  printf("\n");

  printf("***ORIGIBAL TEST STRING #4: %s***\n", test4);
  toUpper(test4, 0);
  printf("The 0 word was not found in string!\n");
  toUpper(test4, 3);
  toUpper(test4, 5);
  toUpper(test4, 7);
  printf("\n");

  return 0;
}
