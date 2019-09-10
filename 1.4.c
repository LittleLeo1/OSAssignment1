#import <stdio.h>
#import <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{
	int slength = strnlen(argv[1]);
	int rlength = strnlen(argv[2]);
	char* intialString[] = argv[1];
	char StringToRemove[] = argv[2];
	char* finalString[slength] = rmstr(intialString,slength, StringToRemove, rlength);
	printf("/n%s", finalString);

}

char* rmst(char stringOne[],int strinOneLen, char stringTwo[], int stringTwoLen)
{
	char* tempString[strinOneLen];
	char tobeRemoved = stringTwo[0];
	tempString = rmchr(stringOne, tobeRemoved);
	for (int i = 1; i < stringTwoLen; i++)
	{
		tobeRemoved = stringTwo[i];
		tempString = rmchr(tempString, tobeRemoved);
	}
	return tempString;
	 
}
char* rmchr(char string[], char removeChar)
{
	int stringLength = strnlen(string);
	char* newString[stringLength];
	int j = 0;
	for (int i = 0; i < stringLength; i++)
	{
		if (string[i] != removeChar)
		{
			newString[j++] = s[i];
		}
	}
	return newString;
}