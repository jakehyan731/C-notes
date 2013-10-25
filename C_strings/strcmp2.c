void f(char *color, int color_len)
{
	switch (color_len)
	{
		case 3:
			if (strcmp (color, "red")==0)
				do_red();
			else 
				goto unknown_color;
			break;
		case 4:
			if (strcmp (color, "blue")==0)
				do_blue();
			else
				goto unknown_color;
			break;
		case 5:
			if (strcmp (color, "green")==0)
				do_green();
			else
				goto unknown_color;
			break;
		case 6:
			if (strcmp (color, "orange")==0)
				do_orange();
			else if (strcmp (color, "yellow")==0)
				do_yellow();
			else
				goto unknown_color;
			break;
		default:
				goto unknown_color;

	};

	return;

unknown_color:
	printf ("Unknown color!\n");
};
