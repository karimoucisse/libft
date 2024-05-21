#include "libft.h"

int compare_is_function(int (f)(int), int (f2)(int))
{
	char str[11] = "1aWe78P?l\n";
	int i = 0;
	while(str[i])
	{
		if((f)(str[i]) > 0 && (f2)(str[i]) <= 0)
			return 0;
		if((f)(str[i]) <= 0 && (f2)(str[i]) > 0)
			return 0;
		i++;
	}
	return 1;
}

int compare_str_function(char (f)(char), char (f2)(char))
{
	char str[11] = "1aqlffWDD";
	int i = 0;
	while(str[i])
	{
		if((f)(str[i]) != (f2)(str[i]))
			return 0;
		if((f)(str[i]) != (f2)(str[i]))
			return 0;
		i++;
	}
	return 1;
}

void print_msg(int s, char *func_name)
{
	if(s)
		printf("%s: OK\n", func_name);
	else
		printf("%s: Failed\n", func_name);
}

int main()
{
	char str[11] = "1aqlffWDD";
	print_msg(compare_is_function(ft_isalnum, isalnum), "ft_isalnum");
	print_msg(compare_is_function(ft_isalpha, isalpha), "ft_isalpha");
	print_msg(compare_is_function(ft_isascii, isascii), "ft_isascii");
	print_msg(compare_is_function(ft_isdigit, isdigit), "ft_isdigit");
	print_msg(compare_is_function(ft_isprint, isprint), "ft_isprint");
	print_msg(ft_strlen("qwertyui") == strlen("qwertyui"), "ft_strlen");
	print_msg(compare_is_function(ft_tolower, tolower), "ft_tolower");
	print_msg(compare_is_function(ft_toupper, toupper), "ft_toupper");
	print_msg(ft_strchr("wfeflnv", 3) == strchr("wfeflnv", 3), "ft_strchr");
	// print_msg(ft_atoi("-1456++") == atoi("-1456++"), "ft_atoi");
}
