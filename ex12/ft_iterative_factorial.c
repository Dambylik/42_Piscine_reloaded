/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:13:58 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/15 17:47:53 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	fact = 1;
	i = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	return (fact);
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	int	z;

	x = 10;
	y = 1;
	z = 0;
	printf("factorial of %d is %d\n", x, ft_iterative_factorial(x));
	printf("factorial of %d is %d\n", y, ft_iterative_factorial(y));
	printf("factorial of %d is %d\n", z, ft_iterative_factorial(z));
	return (0);
}
*/
