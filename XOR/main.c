#include "xor.h"
#include <err.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[])
{	
	if(argv != 3)
	{
		errx(1, "Not good");
	}
	int x = atoi(argc[1]);
	int y = atoi(argc[2]);		
	XOR(x, y);

	return 1;
}
