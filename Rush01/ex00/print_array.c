/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wli-ting <wli-ting@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 19:44:43 by wli-ting          #+#    #+#             */
/*   Updated: 2026/04/19 14:56:31 by jiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_array(int arg[4][4])
{
	int		row;
	int		column;
	char	digit;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			digit = arg[row][column] + '0';
			write(1, &digit, 1);
			if (column < 3)
				write(1, " ", 1);
			column++;
		}
		write(1, "\n", 1);
		row++;
	}
}
