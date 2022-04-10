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
	height = height*2;


	for(int i = 0; i <height/2; i++)
	{
		for(int j = 0; j <  height; j++)
		{
			if(j > height/2 + i || j < height/2 - i)
				printf(" ");
			else
				printf("*");


		}
		printf("\n");

		//if(i>height/2)
		//	break;


	}
	int k=0;
	while(k < height/2)
	{
		printf(" ");
		k++;
		}
	printf("*\n");

	


}

