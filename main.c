#include "libft.h"

int compare_function(int (f)(int), int (f2)(int))
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

void print_msg(int s, char *func_name)
{
	if(s)
		printf("%s: OK\n", func_name);
	else
		printf("%s: Failed\n", func_name);
}

int main()
{
	// char str[11] = "1aWe78P?l\n";
	// int i = 0;
	print_msg(compare_function(ft_isalnum, isalnum), "ft_isalnum");
	print_msg(compare_function(ft_isalpha, isalpha), "ft_isalpha");
	print_msg(compare_function(ft_isascii, isascii), "ft_isascii");
	print_msg(compare_function(ft_isdigit, isdigit), "ft_isdigit");
	print_msg(compare_function(ft_isprint, isprint), "ft_isprint");
	// while(str[i])
	// {
	// 	if(ft_isalnum(str[i]) != isalnum(str[i]))
	// 	{
	// 		printf("ft_isalnum: FAILED!\n");
	// 		return(0);
	// 	}q
	// 	if(ft_isalpha(str[i]) != isalpha(str[i]))
	// 	{
	// 		printf("ft_isalpha: FAILED!\n");
	// 		return(0);
	// 	}
	// 	if(ft_isascii(str[i]) != isascii(str[i]))
	// 	{
	// 		printf("ft_isascii: FAILED!\n");
	// 		return(0);
	// 	}
	// 	if(ft_isdigit(str[i]) != isdigit(str[i]))
	// 	{
	// 		printf("ft_isdigit: FAILED!\n");
	// 		return(0);
	// 	}
	// 	if(ft_isprint(str[i]) != isprint(str[i]))
	// 	{
	// 		printf("ft_isprint: FAILED!\n");
	// 		return(0);
	// 	}
	// }
}
