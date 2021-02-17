/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 22:03:29 by joduong           #+#    #+#             */
/*   Updated: 2020/07/21 04:44:25 by joduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_cat(int size, char **strs, char *sep, char *tab)
{
	int		i;
	int		j;
	int		k;

	j = -1;
	k = 0;
	while (++j < size)
	{
		i = -1;
		while (strs[j][++i])
			tab[k++] = strs[j][i];
		if (j < size - 1)
		{
			i = -1;
			while (sep[++i])
				tab[k++] = sep[i];
		}
	}
	tab[k] = '\0';
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (j < size)
	{
		i += ft_strlen(strs[j]) + ft_strlen(sep) + 1;
		j++;
	}
	if (!(tab = malloc(sizeof(char) * i)))
		return (NULL);
	if (size == 0)
		return (NULL);
	tab = ft_cat(size, strs, sep, tab);
	return (tab);
}
