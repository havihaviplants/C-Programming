#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	clock_t start, stop;
	double duration;
	start = clock();

	for (int i = 0; i < 1000000; i++)
		;
	stop = clock();

	
}
