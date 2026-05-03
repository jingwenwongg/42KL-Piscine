/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwong <jiwong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 08:33:21 by jiwong            #+#    #+#             */
/*   Updated: 2026/04/28 08:43:29 by jiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*str = "Hello World";
	char	*to_find = "llo";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/
