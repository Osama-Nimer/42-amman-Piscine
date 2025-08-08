/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onimer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:38:02 by onimer            #+#    #+#             */
/*   Updated: 2025/02/10 13:59:51 by onimer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
#include <stdio.h>
int main(void)
{
	int a = 5;
	int b = 5;
	ft_ultimate_div_mod(&a,&b);
	printf("%d",a);
	printf("%d",b);
}
