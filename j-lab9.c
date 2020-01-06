// Prelab 9
// By Jim Ries
// November 1, 2019
#include <stdio.h>
#include <stdlib.h>
// Prototype for the function that gets a single
// comma-separated (or newline-separated) field from the filevoid
void GetNextCSVField(FILE * fp, char *output, int size);

int main(void)
{
  int studentID;
  char lastname[12];
  char firstname[13];
  char buffer[9];
  char answers[41];
  char answerKey[41];
  char spaces[5];
  char keyID[9];
  double score = 0;
  FILE * fp;
  // Open the file
  fp=fopen("lab9.txt","r");
  if (NULL==fp)
  {
    printf("**Error:  Could not open lab9.txt\n");
  }
  else
  {
    // Keep going until we run out of lines (i.e., we hit the end of the file)
    while (!feof(fp))
    {
      GetNextCSVField(fp, buffer, 8);
      studentID = atoi(buffer);

      if (!feof(fp))
      {
        GetNextCSVField(fp, spaces, 4);
        GetNextCSVField(fp, keyID, 8);
        GetNextCSVField(fp, lastname, 11);
        GetNextCSVField(fp, firstname, 12);
        if(studentID == 99999999)
        {
          GetNextCSVField(fp, answerKey, 40);
          GetNextCSVField(fp, spaces, 1);
          printf("***NEW ANSWER KEY = %s %s\n", firstname, lastname);
          for(int i = 0; answerKey[i] != '\0'; i++)
          {
            printf("%c",answerKey[i]);
          }
          printf("\n\n");
        }
        if(studentID != 99999999)
        {
          GetNextCSVField(fp, answers, 40);
          GetNextCSVField(fp, spaces, 1);
          printf("\n");
          printf("%s %s :\n", lastname, firstname);
          printf("%s \n", answers);
          int i;
          for(i = 0; answers[i] != '\0'; i++)
          {
            if(answers[i] == answerKey[i])
            {
              score++;
            }
          }
          printf("%2.6lf\n", score/i);
        }
      }
      score = 0;
    }
    fclose(fp);
  }
  return 0;
}

void GetNextCSVField(FILE * fp, char *output, int size)
{
  int i;
  for(i=0; i<size;i++)
  {
    output[i] = fgetc(fp);
  }
  output[i] = '\0';
}
