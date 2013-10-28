void f(char *color)
{
	if (strcmp (color, "red")==0)
		do_red();
	else if (strcmp (color, "green")==0)
		do_green();
	else if (strcmp (color, "blue")==0)
		do_blue();
	else if (strcmp (color, "orange")==0)
		do_orange();
	else if (strcmp (color, "yellow")==0)
		do_yellow();
	printf ("Unknown color!\n");
};
