/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwong <jiwong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 09:36:22 by jiwong            #+#    #+#             */
/*   Updated: 2026/04/12 10:17:00 by jiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
		return ;
	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if ((row == 0 && col == 0) || (row == y - 1 && col == x - 1))
				ft_putchar('A');
			else if ((row == 0 && col == x - 1) || (row == y - 1 && col == 0))
				ft_putchar('C');
			else if (row == 0 || row == y - 1 || col == 0 || col == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
