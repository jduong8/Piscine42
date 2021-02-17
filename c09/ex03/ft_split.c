/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 04:11:49 by joduong           #+#    #+#             */
/*   Updated: 2020/07/20 05:41:28 by joduong          ###   ########.fr       */
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

void	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	while ((src[i]) && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	length = 0;
	ft_strlen(src);
}

int		is_charset(char c, char *charset)
{
	int		i;

	i = 0;
	while (i < ft_strlen(charset))
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		word;
	int		total;
	char	**result;

	result = malloc(ft_strlen(str) + 1);
	word = 0;
	total = 0;
	while (total < ft_strlen(str))
	{
		i = 0;
		while (is_charset(str[total + i], charset) == 0 && str[total + i])
			i++;
		if (i != 0)
		{
			result[word] = malloc(i + 1);
			ft_strlcpy(result[word], str + total, i + 1);
			word++;
		}
		total = total + i + 1;
	}
	result[word] = 0;
	return (result);
}
