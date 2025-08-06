/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onimer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:55:37 by onimer            #+#    #+#             */
/*   Updated: 2025/02/10 14:29:15 by onimer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	tmp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		tmp = tab[start];
		tab[start] = tab[end];
		tab[end] = tmp;
		start++;
		end--;
	}
}
#include <stdio.h>
int	main(void)
{
	int tab[] = {1,2,3,4};
	int size = sizeof(tab) / sizeof(tab[0]);
	ft_rev_int_tab(tab ,size);
	for(int i = 0; i < size;i++)
	{
		printf("%d" , tab[i]);
	}
}
