int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 96 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
