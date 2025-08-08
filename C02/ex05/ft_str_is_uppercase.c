/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onimer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 08:20:49 by onimer            #+#    #+#             */
/*   Updated: 2025/02/12 08:28:11 by onimer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char str[] = "OSAMA";
	printf("%d",ft_str_is_uppercase(str));
}
*/
