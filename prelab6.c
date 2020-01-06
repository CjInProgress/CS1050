#include <stdio.h>

void promptAndGetFloat(char string[], float *y)
{
  printf("%s", string);
  scanf("%f",y);
}

void promptAndGetInteger(char string[], int *y)
{
  printf("%s", string);
  scanf("%d",y);
}

void promptAndGetString(char string[], char y[])
{
  printf("%s", string);
  scanf("%s",y);
}

void promptAndGetArray(char string[], int y[])
{
  printf("%s\n", string);
  for(int i=0; i<11; i++) //moves pointer to next element
  {
    printf("Location %d is:", i);
    scanf("%d",&y[i]);
    if(y[i] != -1) //exit loop
    {
      continue;
    }
    else
    {
      break;
    }
  }
}

void printArray(int y[])
{
  printf("Your array is: \n");
  for(int i=0; i<11; i++) //moves pointer to next element
  {
    printf("Location %d is: ", i);
    printf("%d \n",y[i]);
    if(y[i] != -1) //exit loop
    {
      continue;
    }
    else
    {
      break;
    }
  }
}

int main(void)
{
  int i;
  float f;
  char s[11];
  int a[11];
  printf("\n***********************\n");
  printf("* Welcome to Prelab 6 *\n");
  printf("***********************\n\n");
  promptAndGetInteger("Please enter an integer and hit enter: ",&i);
  promptAndGetFloat("Please enter a float and hit enter: ",&f);
  promptAndGetString("Please enter a string with no spaces and hit enter: ",s);
  promptAndGetArray("Please enter up to 10 positive integers, entering -1 to end: ",a);
  printf("\n***********************\n");
  printf("You entered %d,%f,%s\n",i,f,s);
  printArray(a);
  return 0;
}
