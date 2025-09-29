/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:24:11 by dkang             #+#    #+#             */
/*   Updated: 2025/07/20 17:58:23 by jichoi2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	draw(int column, char side, char mid)
{
	int	i;

	i = 0;
	while (i < column)
	{
		if ((i == column - 1) || (i == 0))
			ft_putchar(side);
		else
			ft_putchar(mid);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if ((i == 0) || (i == y - 1))
			draw(x, 'o', '-');
		else
			draw(x, '|', ' ');
		i++;
	}
}
