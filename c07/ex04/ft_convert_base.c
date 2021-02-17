/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 05:22:21 by joduong           #+#    #+#             */
/*   Updated: 2020/07/20 05:47:21 by joduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_strlen(char *str);
int				i_base(char c, char *base);
int				is_base(char c, char *base);
int				check_base(char *base);
void			ft_rev_tab(char *tab, int size);

long int		ft_atoi_base(char *str, char *base)
{
	int		atoi;
	int		negative;

	atoi = 0;
	negative = 1;
	if (!check_base(base))
		return (0);
	while (*str == '\t' || *str == '\n' || *str == '\r' || *str == '\v'
			|| *str == '\f' || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = negative * -1;
		str++;
	}
	while (is_base(*str, base))
	{
		atoi = atoi * ft_strlen(base) + i_base(*str, base);
		str++;
	}
	return (atoi * negative);
}

long int		ft_fill_tab(char *tab, long int num, char *base_to)
{
	int			neg;
	int			baselen;
	long int	i;

	baselen = ft_strlen(base_to);
	neg = 0;
	i = 0;
	if (num < 0)
	{
		neg = 1;
		num = -num;
	}
	if (num == 0)
		tab[i++] = base_to[num % baselen];
	while (num)
	{
		tab[i++] = base_to[num % baselen];
		num = num / baselen;
	}
	if (neg)
		tab[i++] = '-';
	return (i);
}

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	num;
	int			i;
	char		*tab;

	i = 0;
	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);
	if (!(tab = malloc(sizeof(char) * 34)))
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	i = ft_fill_tab(tab, num, base_to);
	ft_rev_tab(tab, i);
	tab[i] = '\0';
	return (tab);
}
