/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 04:51:50 by joduong           #+#    #+#             */
/*   Updated: 2020/07/13 04:55:31 by joduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}
