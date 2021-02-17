#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = i + 1;
	while (i < ac && j < ac)
	{
		ft_putstr(ft_strcpy(av[i++], av[j++]));
		ft_putstr("\n");
	}
	return (0);
}
