#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]) {
	int order, startNum, endNum; 
	order = atoi(argv[1]);
	startNum = atoi(argv[2]);
	endNum = atoi(argv[3]);

	for (int i = startNum; i < endNum; i++)
	{
		int numberOfDigits = getNumOfDigits(i);
		if (numberOfDigits == order)
		{
			if (isItArmstrong(i, numberOfDigits)==1)
			{
				printf("\n %d", i);
			}
		}
	}
	return 0;
}
int getNumOfDigits(int number)
{
	int numOfDigits=0;
	while (number > 0)
	{
		numOfDigits = numOfDigits + 1;
		number = number / 10; 
	}
	return numOfDigits;
}

int isItArmstrong(int number, int numOfDigits)
{
	int remainder, sum;
	int tempoary = number;
	sum = 0;
	while (tempoary > 0)
	{
		remainder = tempoary % 10; 
		sum = sum + pow(remainder, numOfDigits);
		tempoary = tempoary / 10; 
	}
	if (number == sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}