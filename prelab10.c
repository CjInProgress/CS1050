#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct _Player
{
  char firstName[16];
  char lastName[16];
  char team[16];
  int year;
  float batt;
  float onBase;
  float slug;
};

void printPitchers(struct _Player *p, int size)
{
  for(int i=0; i<size; i++)
  {
    printf("FN: %s \n", p[i].firstName);
    printf("LN: %s \n", p[i].lastName);
    printf("Team: %s \n", p[i].team);
    printf("Year: %d \n", p[i].year);
    printf("Batting Avg: %lf \n", p[i].batt);
    printf("On Base Avg: %lf \n", p[i].onBase);
    printf("Slugging Avg: %lf \n", p[i].slug);
    printf("\n");
  }
}

void GetNextCSVField(FILE * fp, char *output)
{
  char c=0;
  while (!feof(fp) && c != " " && c!= "\n")
  {
    c = *output;
    output++;
  }
  *output = '\0';
}

int main(void)
{
  struct _Player allPlayers[8];

  FILE * fp;
  fp = fopen("prelab10.dat","r");
  char buffer[20];
  if(fp)
  {
    for(int i = 0; i<8; i++)
    {
      GetNextCSVField(fp, allPlayers[i].firstName);
      GetNextCSVField(fp, allPlayers[i].lastName);
      GetNextCSVField(fp, allPlayers[i].team);
      GetNextCSVField(fp, buffer);
      allPlayers[i].year = atoi(buffer);
      GetNextCSVField(fp, buffer);
      allPlayers[i].batt = atof(buffer);
      GetNextCSVField(fp, buffer);
      allPlayers[i].onBase = atof(buffer);
      GetNextCSVField(fp, buffer);
      allPlayers[i].slug = atof(buffer);
    }
  }
  else
  {
    printf("Error: 'prelab10.c' couldn't be opened.\n");
  }
  printPitchers(allPlayers, 8);
}
