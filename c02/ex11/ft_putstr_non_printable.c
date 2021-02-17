#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	convert_hexa(unsigned char n)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putstr(hex[n / 16]);
	ft_putstr(hex[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 127)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 2);
			convert_hexa(str[i]);
		}
		i++;
	}
}
