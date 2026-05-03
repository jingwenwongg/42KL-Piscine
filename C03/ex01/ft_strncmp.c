/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwong <jiwong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 08:00:15 by jiwong            #+#    #+#             */
/*   Updated: 2026/04/28 08:11:09 by jiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned int)(s1[i] - s2[i]));
}

/*
#include <stdio.h>
int	main(void)
{
	char	a[] = "Hello";
	char	b[] = "Hahaha";
	int	result = ft_strncmp(a, b, 2);

	if (result == 0)
		printf("is the same.");
	else
		printf("is not the same.");
}*/
