#include<stdio.h>
int main()
{
	for(int y=0;y<10;y++)
	{
		for(int x=0;x<20;x++)
		{
			if(((x+y<10)&&((y<3)&&(x<8)))||((x+y>14)&&((y>6)&&(x>14))))
					printf("0");
					else
					printf("*");
					}
					printf("\n");
					}}


