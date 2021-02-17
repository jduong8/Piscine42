/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelhomm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 08:53:20 by tbelhomm          #+#    #+#             */
/*   Updated: 2020/07/05 12:50:29 by joduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	ft_putchar(char c);

int		ft_atoi(char *str)
{
	int		i;
	int		neg;
	int		atoi;

	i = 0;
	neg = 1;
	atoi = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] == '-')
			neg = -neg;
		else if (str[i] == '+')
		{
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			atoi *= 10;
			atoi += str[i] - 48;
		}
		else
			break ;
		i++;
	}
	return (atoi * neg);
}

int		main(int cc, char **cv)
{
	if (cc > 2)
	{
		rush(ft_atoi(cv[1]), ft_atoi(cv[2]));
	}
	return (0);
}
