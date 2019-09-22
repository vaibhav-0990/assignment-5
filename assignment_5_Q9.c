#include <stdio.h>
int main()
{
  for(int j=0; j<9; j++)
  {
    for (int i=0; i<20; i++)
    {
      if ((i<3)||(i+j<8)||(i+j>(3+(2*i))))
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
