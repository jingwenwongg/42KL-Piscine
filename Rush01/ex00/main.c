/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwong <jiwong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 14:18:43 by jiwong            #+#    #+#             */
/*   Updated: 2026/04/19 14:42:56 by jiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	parse_input(char *str, int rules[16])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(str) != 31)
		return (0);
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (str[i] < '1' || str[i] > '4')
				return (0);
			rules[j++] = str[i] - '0';
		}
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

void	init_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	rules[16];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!parse_input(argv[1], rules))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	init_grid(grid);
	if (solver(grid, rules, 0))
		print_array(grid);
	else
		write(1, "Error\n", 6);
	return (0);
}
