/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwong <jiwong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 08:15:47 by jiwong            #+#    #+#             */
/*   Updated: 2026/04/28 08:22:42 by jiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "World";
	char	dest[100] = "Hello";

	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
}*/
