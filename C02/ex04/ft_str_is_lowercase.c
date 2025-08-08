/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onimer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:31:53 by onimer            #+#    #+#             */
/*   Updated: 2025/02/12 08:20:11 by onimer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			c = 1;
		else
			return (0);
		i++;
	}
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "AAAAAAAAAA";
	printf("%d" ,ft_str_is_lowercase(str));
}
*/
