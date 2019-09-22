#include <stdio.h>
int main()
{
  for(int j=0; j<10; j++)
  {
    for (int i=0; i<20; i++)
    {
      if (((i+j<8)||(i+j >5+(2*j))||(j<2))&&(j<8))
      {
        printf("*");
      }
      else
      {
        printf("O");
      }
    }
    printf("\n");
  }
}
