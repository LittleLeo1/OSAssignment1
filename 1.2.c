#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]) {
	int i;
	int phiNum;
	int numberToTest;
	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			numberToTest = atoi(argv[i]);
			phiNum = getPhi(numberToTest);
			printf("\n %d", phiNum);
		}
	}
	return 0;
}

int getPhi(int number)
{
	int result =0;
	for (int i = 2; i < number; i++)
		if (GCD(i, number) == 1)
		{
			result++;
		}
	return result;
}

int GCD(int numOne, int numTwo)
{
	if (numOne == 0)
	{
		return numTwo;
	}
	return GCD(numTwo % numOne, numOne);
}