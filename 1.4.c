#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <string.h>

void rmstr(char stringOne[],int strinOneLen, char stringTwo[], int stringTwoLen);

int main(int argc, char* argv[])
{
	//declaring the intial string values
	char initialString[100000];
	char intialSecString[100000];

	sscanf(argv[1], "%s", &initialString);
	sscanf(argv[2], "%s", &intialSecString);
	int slength = strlen(initialString);
	int rlength = strlen(intialSecString);
	rmstr(initialString,slength, intialSecString, rlength);
}

void rmstr(char stringOne[],int strinOneLen, char stringTwo[], int stringTwoLen)
{
	char tobeRemoved;
	int pointer = 0;
	int comp;
	for ( int i = 0; i < stringTwoLen; i++)
	{
		int k=0;
		for(int j=0; j < strinOneLen; j++)
		{	
			if ( stringOne[j] == stringTwo[i])
			{
				stringOne[j] = stringOne [j+1];
				pointer = j;
			}
		}
	}
	stringOne[pointer] = '\0';
	printf("%s", stringOne);
}
