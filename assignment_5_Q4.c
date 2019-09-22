#include<stdio.h>
int main()
{
	for(int y=0;y<6;y++)
	{
		for(int x=0;x<30;x++)
		{
			if((y%2==1)&&((x%3==0)||(x%5==0)))
				printf("*");
			else 
					printf("0");
					}
		printf("\n");
					}
					}


