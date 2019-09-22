#include<stdio.h>
int main()
{
	for (int y=0;y<10;y++)
	{
		for (int x=0;x<20;x++)
			if(((y%2==1)&&(y<4))||((y%2==1)&&((y>4)&&(x>3)&&(x<14))))
				printf("*");
			else
				printf("0");
		printf("\n");
	}}
