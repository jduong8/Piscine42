#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	set_upper;

	i = 0;
	set_upper = 1;
	while (str[i])
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) || (str[i] >= '0' && str[i] <= '9'))
		{
			if (set_upper && (str[i] >= 97 && str[i] <= 122))
				str[i] = str[i] - 32;
			else if (!set_upper && (str[i] >= 65 && str[i] <= 90))
				str[i] = str[i] + 32;
			set_upper = 0;
		}
		else
			set_upper = 1;
		i++;
	}
	return (str);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (i < ac)
		ft_putstr(ft_strcapitalize(av[i++]));
	return (0);
}
