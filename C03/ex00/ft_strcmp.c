/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwong <jiwong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:48:49 by jiwong            #+#    #+#             */
/*   Updated: 2026/04/28 07:54:28 by jiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strcmp("Hello", "Hella"));
	printf("%d\n", ft_strcmp("Hello", "Hello"));
	return (0);
}*/
