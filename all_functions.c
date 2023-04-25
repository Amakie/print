#include "main.h"
/**
 * get_function - returns the number of identifiers.
 * @s: argument
 * @ind: index
 * Return: number of identifiers.
 */
int get_function(const char *s, int ind)
{
	print_f pr[] =
	{
		{"c", print_char}, {"s", print_string}, {"i", int_conversion},
		{"d", int_conversion}, {"%", print_perc}
	};

	int k = 0, l = 0, first_ind;

	first_ind = ind;
	while (pr[k].struct_args)
	{
		if (s[ind] == pr[k].struct_args[l])
		{
			if (pr[k]struct_args[l + 1] != '\0')
				ind++, l++;
			else
				break;
		}
		else
		{
			l = 0;
			k++;
			ind = first_ind;
		}
	}
	return (l);
