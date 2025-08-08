/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onimer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:23:00 by onimer            #+#    #+#             */
/*   Updated: 2025/02/26 13:09:52 by onimer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tmp;
	int	i;

	i = 0;
	if (min >= max)
	{
		tmp = 0;
		return (0);
	}
	tmp = (int *) malloc((max - min) * sizeof(tmp));
	if (tmp == 0)
		return (0);
	while (min < max)
	{
		tmp[i] = min;
		min++;
		i++;
	}
	*range = tmp;
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	int *arr;
	arr = NULL;
	int min = -1;
	int max = 10;
	int i = 0;
	ft_ultimate_range(&arr , min ,max);
	while(min < max)
	{
		printf("%d\n",arr[i]);
		min++;
		i++;
	}
}
*/
