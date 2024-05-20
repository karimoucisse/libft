char	*ft_strrchr(const char *str, int	searchedChar)
{
	int		len;
	char	*c;

	len = ft_strlen(str);
	while (str[len])
	{
		if (str[len] == searchedChar)
		{
			return (str[len]);
		}
		len--;
	}
	return (0);
}
