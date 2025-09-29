/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhlee <minhlee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:22:31 by jichoi2           #+#    #+#             */
/*   Updated: 2025/07/20 19:03:09 by minhlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(int x, int a, int b, int c)
{
	int	i;

	i = 0;
	if (x >= 1)
		ft_putchar(a);
	while (i <= (x - 3))
	{
		ft_putchar(b);
		i++;
	}
	if (x >= 2)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (y >= 1 && x >= 1)
		ft_line(x, '/', '*', '\\');
	while (i < y - 2 && x >= 1)
	{
		ft_line(x, '*', ' ', '*');
		i++;
	}
	if (y >= 2 && x >= 1)
		ft_line(x, '\\', '*', '/');
}
