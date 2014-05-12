#include <string.h>
#include <stdio.h>

int main()
{
	char str[] = "The quick brown fox jumps over the lazy dog"; // correct
	//char *str= "The quick brown fox jumps over the lazy dog"; // incorrect
	char *sep = " ";

	/* get the first token */
	char *token = strtok(str, sep);
   
	/* walk through other tokens */
	while( token != NULL ) 
	{
		printf( "%s\n", token );
		token = strtok(NULL, sep);
	}
};
