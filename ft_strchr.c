char	*ft_strchr(const char *str, int	searchedChar)
{
	int		i;
	char	*c;

	i = 0;
	while (str[i])
	{
		if (str[i] == searchedChar)
		{
			return (str[i]);
		}
		i++;
	}
	return (0);
}
