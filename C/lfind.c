#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int my_stricmp (const char *p1, const char **p2)
{
	//printf ("p1=%s p2=%s\n", p1, *p2); // debug
	return stricmp (p1, *p2);
};

int find_string_in_array_of_strings(const char *s, const char **array, size_t array_size)
{
	void *found=lfind (s, array, &array_size, sizeof(char*), my_stricmp);
	if (found)
		return (char**)found-array;
	else
		return -1; // string not found
};

int main()
{
	const char* strings[]={"string1", "hello", "world", "another string"};
	size_t strings_t=sizeof(strings)/sizeof(char*);

	printf ("%d\n", find_string_in_array_of_strings("world", strings, strings_t));
	printf ("%d\n", find_string_in_array_of_strings("world2", strings, strings_t));
};
