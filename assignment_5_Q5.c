#include<stdio.h>
int main()
{
	for(int y=0;y<5;y++)
	{
		for(int x=0;x<20;x++)
			if((y%2==1)&&(x%5!=0))
				printf("0");
			else
				printf("*");
	
	printf("\n");
	}
}
