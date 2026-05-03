/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wli-ting <wli-ting@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 11:37:44 by wli-ting          #+#    #+#             */
/*   Updated: 2026/04/19 14:28:15 by jiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_valid(int arg[4][4], int row, int column, int value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (arg[row][i] == value)
			return (0);
		if (arg[i][column] == value)
			return (0);
		i++;
	}
	return (1);
}

int	solver(int arg[4][4], int rules[16], int position)
{
	int	row;
	int	column;
	int	value;

	if (position == 16)
		return (check_all(arg, rules));
	row = position / 4;
	column = position % 4;
	value = 1;
	while (value <= 4)
	{
		if (is_valid(arg, row, column, value))
		{
			arg[row][column] = value;
			if (solver(arg, rules, position + 1))
				return (1);
			arg[row][column] = 0;
		}
		value++;
	}
	return (0);
}
