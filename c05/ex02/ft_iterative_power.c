/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 04:59:03 by joduong           #+#    #+#             */
/*   Updated: 2020/07/13 05:02:11 by joduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		res;
	int		i;

	i = power;
	res = 1;
	if (power < 0)
		return (0);
	while (i > 0)
	{
		res = res * nb;
		i--;
	}
	return (res);
}
