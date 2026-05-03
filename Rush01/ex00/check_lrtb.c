/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_lrtb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wli-ting <wli-ting@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 09:47:12 by wli-ting          #+#    #+#             */
/*   Updated: 2026/04/19 11:13:07 by wli-ting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_left(int arg[4][4], int row, int rules)
{
	int	column;
	int	maximum;
	int	visible;

	column = 0;
	maximum = 0;
	visible = 0;
	while (column < 4)
	{
		if (arg[row][column] > maximum)
		{
			maximum = arg[row][column];
			visible++;
		}
		column++;
	}
	return (visible == rules);
}

int	check_right(int arg[4][4], int row, int rules)
{
	int	column;
	int	maximum;
	int	visible;

	column = 3;
	maximum = 0;
	visible = 0;
	while (column >= 0)
	{
		if (arg[row][column] > maximum)
		{
			maximum = arg[row][column];
			visible++;
		}
		column--;
	}
	return (visible == rules);
}

int	check_top(int arg[4][4], int column, int rules)
{
	int	row;
	int	maximum;
	int	visible;

	row = 0;
	maximum = 0;
	visible = 0;
	while (row < 4)
	{
		if (arg[row][column] > maximum)
		{
			maximum = arg[row][column];
			visible++;
		}
		row++;
	}
	return (visible == rules);
}

int	check_bottom(int arg[4][4], int column, int rules)
{
	int	row;
	int	maximum;
	int	visible;

	row = 3;
	maximum = 0;
	visible = 0;
	while (row >= 0)
	{
		if (arg[row][column] > maximum)
		{
			maximum = arg[row][column];
			visible++;
		}
		row--;
	}
	return (visible == rules);
}

int	check_all(int arg[4][4], int rules[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if ((!check_top(arg, i, rules[i]))
			|| (!check_bottom(arg, i, rules[i + 4])))
			return (0);
		if ((!check_left(arg, i, rules[i + 8]))
			|| (!check_right(arg, i, rules[i + 12])))
			return (0);
		i++;
	}
	return (1);
}
