#include<stdio.h>
int main()
{
	for(int y=0;y<5;y++)
	{
		for(int x=0;x<20;x++)
			if((x+y<24)&&(y%2==0))
				printf("*");
			else
			{
				if(x%2==0)
					printf("*");
				else
					printf("0");

			}
	printf("\n");
	}
}


