/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wli-ting <wli-ting@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 13:54:54 by wli-ting          #+#    #+#             */
/*   Updated: 2026/04/19 14:43:52 by jiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

void	print_array(int arg[4][4]);

int		solver(int arg[4][4], int rules[16], int position);
int		is_valid(int arg[4][4], int row, int column, int value);

int		check_left(int arg[4][4], int row, int rules);
int		check_right(int arg[4][4], int row, int rules);
int		check_top(int arg[4][4], int column, int rules);
int		check_bottom(int arg[4][4], int column, int rules);
int		check_all(int arg[4][4], int rules[16]);

#endif
