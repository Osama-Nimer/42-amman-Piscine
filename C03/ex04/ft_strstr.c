/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onimer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 08:23:25 by onimer            #+#    #+#             */
/*   Updated: 2025/02/18 14:24:27 by onimer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count(char *to_find)
{
	int	c;

	c = 0;
	while (to_find[c] != '\0')
		c++;
	return (c);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	c;

	c = count(to_find);
	if (to_find[c] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (j == c)
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "The rain in Spain falls mainly on the plains";
	char to_find[] = "raoi";
	printf("%s" , strstr(str,to_find));
}
*/
