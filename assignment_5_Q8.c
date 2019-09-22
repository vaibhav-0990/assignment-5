#include<stdio.h>
int main()
{
	for(int y=0;y<10;y++)
	{
		for(int x=0;x<20;x++)
			if((x+y<6)||(x>10)&&((y!=8)&&(y!=9)))
				printf("0");
			else
				printf("*");
	printf("\n");
	}
}
