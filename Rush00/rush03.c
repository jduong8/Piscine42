/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelhomm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 08:56:20 by tbelhomm          #+#    #+#             */
/*   Updated: 2020/07/04 11:32:04 by tbelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int ix;
	int iy;

	if (x < 0 || y < 0)
		return ;
	iy = 0;
	while (iy < y)
	{
		ix = 0;
		while (ix < x)
		{
			if (ix == 0 && (iy == y - 1 || iy == 0))
				ft_putchar('A');
			else if (ix == x - 1 && (iy == 0 || iy == y - 1))
				ft_putchar('C');
			else if (ix == 0 || ix == x - 1 || iy == 0 || iy == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			ix++;
		}
		ft_putchar('\n');
		iy++;
	}
}
