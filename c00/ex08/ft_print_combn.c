#include <unistd.h>

void	ft_print_combn(int n)
{
	char	comb[11];
	int	i;

	*comb = '0';
	i = 0;
	if (n < 1 || n > 9)
		return ;
	while (i++ < n)
		comb[i] = comb[i - 1] + 1;
	comb[n] = ',';
	comb[n + 1] = ' ';
	while (*comb <= 58 - n)
	{
		if (*comb != 58 - n)
			write(1, comb, n + 2);
		else
			write(1, comb, n);
		i = n;
		while (i--)
			if (++comb[i] <= 58 - n + 1)
				break ;
		while (++i > 0 && i < n)
			comb[i] = comb[i - 1] + 1;
	}
}

int	ft_atoi(char *str)
{
	int	atoi;
	int	sign;

	atoi = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
	while (*str >= '0' && *str <= '9')
	{
		atoi = atoi * 10 + *str - '0';
		str++;
	}
	return (atoi * sign);
}
