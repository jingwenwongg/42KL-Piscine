/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwong <jiwong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 08:46:04 by jiwong            #+#    #+#             */
/*   Updated: 2026/04/22 08:14:12 by jiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d\n", ft_str_is_printable("Hello"));
	printf("%d\n", ft_str_is_printable("Hello\n"));
}*/
