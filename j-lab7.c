#include <stdio.h>
#include <stdlib.h>

void getString(char userIO[])
{
  scanf("%s", userIO);
  printf("\n");
}

void stringReplace(char ogString[], char pattString[], char repString[])
{
  int whichLetter;
  int check;
  int x;


  for(x = 0; ogString[x] != '\0'; x++) //Check letter by letter
  {
    for(check = 0; pattString[check] != '\0'; check++) //if one of ogStrings letters match, record which one
    {
      if(ogString[x] == pattString[check])
      {
        whichLetter = x;
        break;
      }

      else // if not, end the loop, go to next letter
      {
        break;
      }
    }
  }

  for(int i = 0; repString[i] != '\0'; i++) //
  {
      ogString[whichLetter] = repString[i];
      whichLetter++;
  }

  for(int i =0; ogString[i] != '\0'; i++)
  {
    printf("%c", ogString[i]);
  }
}

int main(void)
{
  char ogString[256];
  char pattString[32];
  char repString[32];


  printf("***WELCOME TO LAB 7***\n");
  printf("Enter a string:");
  getString(ogString);
  printf("Enter a pattern string: ");
  getString(pattString);
  printf("Enter replacement string: ");
  getString(repString);
  stringReplace(ogString, pattString, repString);
  printf("\n ***THANKS FOR DOING LAB 7***\n");

  return 0;
}
