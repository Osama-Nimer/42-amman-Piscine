/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onimer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:28:30 by onimer            #+#    #+#             */
/*   Updated: 2025/02/10 13:56:25 by onimer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
#include <stdio.h>
int	main(void)
{
	int a = 5;
	int b = 5;
	int div;
	int mod;
	ft_div_mod(a,b,&div,&mod);
	printf("%d",div);
	printf("%d",mod);
}
