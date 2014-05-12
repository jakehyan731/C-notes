const char* month_names[]={
	"January", "February", "March", "April", "May", "June", "July", "August",
	"September", "October", "November", "December" };

const char* get_month_name (int month)
{
	if (month>=1 && month<=12)
		return month_names[month-1];

	return "Unknown month!";
};
