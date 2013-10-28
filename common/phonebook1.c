#include <stdio.h>

struct phonebook_entry
{
	char *name;
	char *surname;
	char *tel;
};

struct phonebook_entry phonebook[]=
{
	{ "Kirk", "Hammett", "555-1234" },
	{ "Lars", "Ulrich", "555-5678" },
	{ "James", "Hetfield", "555-1122" },
	{ "Robert", "Trujillo", "555-7788" },
	{ NULL, NULL, NULL }
};

void dump1 (struct phonebook_entry* input)
{
	for (int i=0; input[i].name; i++)
		printf ("%s %s - %s\n", input[i].name, input[i].surname, input[i].tel);
};

void dump2 (struct phonebook_entry* input)
{
	for (struct phonebook_entry* i=input; i->name; i++)
		printf ("%s %s - %s\n", i->name, i->surname, i->tel);
};

void main()
{
	dump1(phonebook);
	dump2(phonebook);
};
