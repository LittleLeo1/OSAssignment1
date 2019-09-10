#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{
	int slength = strnlen(argv[1]);
	char* intialString[] = argv[1];
	char removeChar = argv[2];
	char* finalString[slength] = rmchr(intialString, removeChar);
	printf("/n%s", finalString);

	return 0;

}
char* rmchr(char string[], char removeChar)
{
	int stringLength = strnlen(string);
	char * newString[stringLength];
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