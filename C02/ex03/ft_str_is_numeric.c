/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onimer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:16:30 by onimer            #+#    #+#             */
/*   Updated: 2025/02/12 08:16:53 by onimer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	char str[] = "";
	printf("%d",ft_str_is_numeric(str));
}
*/
