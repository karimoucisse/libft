#include "libft.h"
int main(int ac, char **av)
{
	(void)ac;
	if(ft_isalnum(av[1]))
		printf("good !");
	else
		printf("Failed");
}
