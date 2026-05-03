/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raftahir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 17:52:10 by raftahir          #+#    #+#             */
/*   Updated: 2026/04/12 17:52:42 by raftahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_char(int x, int y, int x_pos, int y_pos)
{
	if ((x_pos == 1 && y_pos == 1) || (x_pos == x && y_pos == 1))
		ft_putchar(111);
	else if ((x_pos == 1 && y_pos == y) || (x_pos == x && y_pos == y))
		ft_putchar(111);
	else if (y_pos == 1 || y_pos == y)
		ft_putchar(45);
	else if (x_pos == 1 || x_pos == x)
		ft_putchar(124);
	else
		ft_putchar(32);
}

void	rush(int x, int y)
{
	int		x_pos;
	int		y_pos;

	if (x <= 0 || y <= 0)
		return ;
	y_pos = 1;
	while (y_pos <= y)
	{
		x_pos = 1;
		while (x_pos <= x)
		{
			ft_print_char(x, y, x_pos, y_pos);
			x_pos++;
		}
		ft_putchar(10);
		y_pos++;
	}
}
