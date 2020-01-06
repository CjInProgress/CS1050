#include <stdlib.h>
#include <stdio.h>

int chosenArt = 0;
int chosenAlb = 0;
int cont = 1;

void chooseArt(void) // user selects artist
{
  printf("Please choose an artist!\n");
  printf("1. Bruce Springsteen\n");
  printf("2. Steve Earle\n");
  printf("3. The Clash\n");
  printf("4. The Sex Pistols\n");
  printf("5. P.J. Harvey\n");
  scanf("%d\n", &chosenArt);

  while (chosenArt > 5 || chosenArt < 1)
  {
    printf("Please choose an artist!\n");
    printf("1. Bruce Springsteen\n");
    printf("2. Steve Earle\n");
    printf("3. The Clash\n");
    printf("4. The Sex Pistols\n");
    printf("5. P.J. Harvey\n");
    scanf("%d\n", &chosenArt);
  }
}

void chooseAlb(void) // user selects album
{
  switch (chosenArt) // depending on artist, certain albums show up
  {
    case 1:
      printf("Please choose an album!\n");
      printf("1. Greetings from Asbury Park\n");
      printf("2. The Wild, The Innocent, and The E-Street Shuffle\n");
      printf("3. Born To Run\n");
      printf("4. Darkness On The Edge of Town\n");
      printf("5. The River\n");
      printf("6. Nebraska\n");
      scanf("%d\n", &chosenAlb);

      while (chosenAlb > 6 || chosenAlb < 1)
      {
        printf("Please choose an album!\n");
        printf("1. Greetings from Asbury Park\n");
        printf("2. The Wild, The Innocent, and The E-Street Shuffle\n");
        printf("3. Born To Run\n");
        printf("4. Darkness On The Edge of Town\n");
        printf("5. The River\n");
        printf("6. Nebraska\n");
        scanf("%d\n", &chosenAlb);
      }
      break;

    case 2:
      printf("Please choose an album!\n");
      printf("1. Copperhead Road\n");
      printf("2. I Feel Alright\n");
      printf("3. El Corazon\n");
      printf("4. Transcedental Blues\n");
      scanf("%d\n", &chosenAlb);

      while (chosenAlb > 4 || chosenAlb < 1)
      {
        printf("Please choose an album!\n");
        printf("1. Copperhead Road\n");
        printf("2. I Feel Alright\n");
        printf("3. El Corazon\n");
        printf("4. Transcedental Blues\n");
        scanf("%d\n", &chosenAlb);
      }
      break;

    case 3:
      printf("Please choose an album!\n");
      printf("1. The  Clash\n");
      printf("2. London Calling\n");
      printf("3. Sandinista\n");
      printf("4. Combat Rock\n");
      scanf("%d\n", &chosenAlb);

      while (chosenAlb > 4 || chosenAlb < 1)
      {
        printf("Please choose an album!\n");
        printf("1. The  Clash\n");
        printf("2. London Calling\n");
        printf("3. Sandinista\n");
        printf("4. Combat Rock\n");
        scanf("%d\n", &chosenAlb);
      }
      break;

    case 4:
      printf("Please choose an album!\n");
      printf("1. Never Mind The Ballocks, Here's The Sex Pistols\n");
      scanf("%d\n", &chosenAlb);

      while (chosenAlb != 1)
      {
        printf("Please choose an album!\n");
        printf("1. Never Mind The Ballocks, Here's The Sex Pistols\n");
        scanf("%d\n", &chosenAlb);
      }
      break;

    case 5:
      printf("Please choose an album!\n");
      printf("1. Dry\n");
      printf("2. Rid of Me\n");
      printf("3. Stories From the City, Stories From the Sea\n");
      scanf("%d\n", &chosenAlb);

      while (chosenAlb > 3 || chosenAlb < 1)
      {
        printf("Please choose an album!\n");
        printf("1. Dry\n");
        printf("2. Rid of Me\n");
        printf("3. Stories From the City, Stories From the Sea\n");
        scanf("%d\n", &chosenAlb);
      }
      break;

    default: printf("\n");
    break;
  }
}

void showRatings(void)
{
  if (chosenArt == 1)
  {
    switch (chosenAlb) // depending on album, ratings show
    {
      case 1: printf("This album is rated 3 stars!\n");
      break;
      case 2: printf("This album is rated 3.5 stars!\n");
      break;
      case 3: printf("This album is rated 4.5 stars!\n");
      break;
      case 4: printf("This album is rated 5 stars!\n");
      break;
      case 5: printf("This album is rated 4.5 stars!\n");
      break;
      case 6: printf("This album is rated 5 stars!\n");
      break;
      default: printf("choose another number!\n");
      break;
    }
  }

  else if (chosenArt == 2)
  {
    switch (chosenAlb) // depending on album, ratings show
    {
      case 1: printf("This album is rated 4 stars!\n");
      break;
      case 2: printf("This album is rated 5 stars!\n");
      break;
      case 3: printf("This album is rated 4.5 stars!\n");
      break;
      case 4: printf("This album is rated 4 stars!\n");
      break;
      default: printf("Invalid Response\n");
      break;
    }
  }

  else if (chosenArt == 3)
  {
    switch (chosenAlb) // depending on album, ratings show
      {
        case 1: printf("This album is rated 5 stars!\n");
        break;
        case 2: printf("This album is rated 5 stars!\n");
        break;
        case 3: printf("This album is rated 4 stars!\n");
        break;
        case 4: printf("This album is rated 3.5 stars!\n");
        break;
        default: printf("Invalid Response\n");
        break;
      }
  }

  else if (chosenArt == 4)
  {
    switch (chosenAlb) // depending on album, ratings show
    {
      case 1: printf("This album is rated 5 stars!\n");
      break;
      default: printf("Invalid Response\n");
      break;
    }
  }

  else if (chosenArt == 5)
  {
    switch (chosenAlb) // depending on album, ratings show
    {
      case 1: printf("This album is rated 3 stars!\n");
      break;
      case 2: printf("This album is rated 3 stars!\n");
      break;
      case 3: printf("This album is rated 5 stars!\n");
      break;
      default: printf("Invalid Response\n");
      break;
    }
  }

  else
  {
    printf("Program crashed, close and start again.");
  }
}

void start(void)
{
  printf("Press any number to continue or 0 to exit.\n");
  scanf("%d\n", &cont);

  while (cont != 0)
  {
    chooseArt();
    chooseAlb();
    showRatings();
    finish();
  }
}

void finish(void)
{
  printf("Press any number to continue or 0 to exit.\n");
  scanf("%d\n", &cont);

  while (cont != 0)
  {
    chooseArt();
    chooseAlb();
    showRatings();
  }
}

int main(void)
{
  start();
}
