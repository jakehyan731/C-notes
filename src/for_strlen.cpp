#include <stdio.h>
#include <string.h>

void count_spaces(char *s)
{
	int spaces=0;

	for (int i=0; i<strlen(s); i++)
	{
		if (s[i]==' ')
			spaces++;
	};

	printf ("spaces=%d\n", spaces);
};

int main()
{
	count_spaces("The quick brown fox jumps over the lazy dog");
	return 0;
};
