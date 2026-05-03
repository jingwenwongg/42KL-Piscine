/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwong <jiwong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 08:58:15 by jiwong            #+#    #+#             */
/*   Updated: 2026/04/10 09:02:24 by jiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positive;
	char	negative;

	positive = 'P';
	negative = 'N';
	if (n >= 0)
	{
		write(1, &positive, 1);
	}
	else
	{
		write(1, &negative, 1);
	}
}
