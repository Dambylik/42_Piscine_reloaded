/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:55:18 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/15 17:47:46 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 10;
	y = 7;
	div = 0;
	mod = 0;
	printf("x = %d\ny = %d\ndiv = %d\nmod = %d\n", x, y, div, mod);
	ft_div_mod(x, y, &div, &mod);
	printf("x = %d\ny = %d\ndiv = %d\nmod = %d\n", x, y, div, mod);
	return (0);
}
*/
