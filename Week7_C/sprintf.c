#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#pragma warning(disable:4996)

int main_2()
{
	char str[10000];
	int s = sprintf(str, "%s-%s", "abcdefg", "123134"); //The sprintf returns the size of the string to s and also copies the strint to str

	s = sprintf(NULL, "%s-%s", "abcdefg", "123134"); //s gets the size of the string from sprintf

	char* p = malloc(s * sizeof(char));
	sprintf(p, "%s-%s", "abcdefg", "123134"); //We copy to str with the size that we got 
	
	return 0;
}