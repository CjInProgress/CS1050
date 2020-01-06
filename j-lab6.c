#include <stdio.h>

void getPromptString(char * output)
{
  scanf("%s", output);
}

void promptAndGetFloat(char* prompt, float* output, float lowerLimit, float upperLimit)
{
  float theInput;
  printf("%s (range %f to %f): ", prompt, lowerLimit, upperLimit);
  scanf("%f", &theInput);

  while(theInput>upperLimit || theInput<lowerLimit)
  {
    printf("ERROR! NUMBER NOT IN RANGE! TRY AGAIN!\n");
    printf("%s (range %f to %f): ", prompt, lowerLimit, upperLimit);
    scanf("%f", &theInput);
    *output = theInput;
  }
}

void getQouitent(float dividend, float divisor, float* quotient)
{
  float theAnswer = dividend / divisor;
  theAnswer = *quotient;
  printf("Your quotient of %f and %f is %f\n", dividend, divisor, theAnswer);
}

int main(void)
{
  char string1[31];
  char string2[31];
  float userDividend;
  float userDivisor;
  float quotient;

  printf("Enter prompt for first variable: ");
  getPromptString(string1);
  printf("Enter prompt for second variable: ");
  getPromptString(string2);
  promptAndGetFloat(string1, &userDividend,-123.2, 71.4);
  promptAndGetFloat(string2, &userDivisor, -5.5, 6.1);
  getQouitent(userDividend, userDivisor, &quotient);
}
