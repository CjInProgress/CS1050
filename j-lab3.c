#include <stdio.h>

int main(void)
{
  int A;
  int B;

  printf("Insert 2 numbers greater than 1 and less than 10 for A\n");
  scanf("%d %d\n", &A, &B);
  switch (A>10 || A<1 || B>10 || B<0)
  {
    case 1:
    printf("Insert 2 numbers less than 10 and greater than 1!\n");
    scanf("%d\n", &A);
    break;

    case 0:
    for(int i=0; i<31; i++)
    {
      i % A == 0 ? printf("%d is divisible by %d\n", i, A) : printf("%d is not divisible by %d\n", i, A);

      i % B == 0 ? printf("%d is divisible by %d\n", i, B) : printf("%d is not divisible by %d\n", i, B);
    }
    break;

    default:
    break;
  }
  return 0;
}
