#include<stdio.h>
int main()
{
	for(int y=0;y<4;y++)
	{
		for(int x=0;x<10;x++)
			if((x%2==0)&&(y%2==0))
				printf("0");
			else
				printf("*");
		printf("\n");
	}}
			
