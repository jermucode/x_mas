#include <stdio.h>
#include <stdlib.h>

int main(const int argc, const char* argv[])
{
	if(argc != 2)
	{
		printf("enter x-mas tree height\n");
		exit(EXIT_FAILURE);
	}
	int height = atoi(argv[1]);


	for(int i = 0; i < height; i++)
	{
		for(int j = 0; j <  height*2; j++)
		{
			if(j > height + i || j < height - i)
				printf(" ");
			else
				printf("*");


		}
		printf("\n");


	}
	int k=0;
	while(k < height)
	{
		printf(" ");
		k++;
	}
	printf("*\n");




}

