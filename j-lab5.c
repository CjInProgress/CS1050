#include <stdio.h>
#define LIMIT 9

/*void initArrayDoubled(int, int);
void initArraySquared(int, int);
void printArray(int, int);
void addArrays(int, int, int, int);
void multiplyArrays(int, int, int, int);*/

void sumArrays(int  array1[],  int array2[], int arrayOut[], int size)
{
  printf("The 2 arrays added together is:\n");
  for(int i=0; i<size; i++)
  {
    arrayOut[i] = array1[i] + array2[i];
    printf("%d\n", arrayOut[i]);
  }
}

void multArrays(int  array1[],  int array2[], int arrayOut[], int size)
{
  printf("Product of 2 arrays are:\n");
  for(int i=0; i<size; i++)
  {
    arrayOut[i] = array1[i] * array2[i];
    printf("%d\n", arrayOut[i]);
  }
}

void printArray(int array[], int array2[], int size)
{
  printf("Array 1 is:\n");
  for(int  i = 0; i<size; i++)
  {
    printf("%d\n", array[i]);
  }
  printf("Array 2 is:\n");
  for(int  i = 0; i<size; i++)
  {
    printf("%d\n", array2[i]);
  }
}

void initArrayCubed(int array[], int size)
{
  for(int i = 0; i < size; i++)
  {
    array[i] = i * i * i;
  }
}

void initArrayDoubled(int array[], int size)
{
  for(int i = 0; i < size; i++)
  {
    array[i] = 2 * i;
  }
}

int main(void)
{
  int arrayOne[LIMIT] =  {0};
  int arrayTwo[LIMIT] = {0};
  int outArray[LIMIT] = {0};
  initArrayCubed(arrayOne, LIMIT);
  initArrayDoubled(arrayTwo, LIMIT);
  printArray(arrayOne, arrayTwo, LIMIT );
  sumArrays(arrayOne, arrayTwo, outArray, LIMIT);
  multArrays(arrayOne, arrayTwo, outArray, LIMIT);
  return 0;
}
