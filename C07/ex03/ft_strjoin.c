/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onimer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:31:38 by onimer            #+#    #+#             */
/*   Updated: 2025/02/26 12:15:17 by onimer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	res_size(int size, char **str, int sep_size)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(str[i]);
		i++;
	}
	len += (size - 1) * sep_size;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;

	i = 0;
	if (size == 0)
	{
		dest = NULL;
		return (dest);
	}
	dest = (char *) malloc(sizeof(char) * res_size(size, strs, ft_strlen(sep)));
	if (dest == NULL)
		return (0);
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size -1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char *st[3] ;
	st[0] = "Osama";
	st[1] = "ammar";
	st[2] = "soso";

	printf("%s",ft_strjoin(3, st," , "));
}
*/
