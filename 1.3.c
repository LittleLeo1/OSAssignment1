#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <string.h>

void rmchr(char string[], char removeChar);

int main(int argc, char* argv[])
{
	char initialString[10000];
	char removeChar;
	char temp[2];
	sscanf(argv[1],"%s",&initialString);
	sscanf(argv[2],"%s",&temp);
	removeChar = temp[0];
	int slength = strlen(initialString);
	rmchr(argv[1], removeChar);
	return 0;

}

void rmchr(char string[], char removeChar)
{
	char newString[1000];
	int stringLength;
	stringLength = strlen(string);
	int j = 0;
	for (int i = 0; i < stringLength; i++)
	{
		if (string[i] != removeChar)
		{
			newString[j] = string[i];
			j++;
		}
	}
	newString[j] ='\0';
	printf("%s", newString);
}
