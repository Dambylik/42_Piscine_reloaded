/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:04:43 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/15 17:48:08 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = 900;
	b = 200;
	c = 0;
	printf("30 = %d\n", ft_sqrt(a));
	printf("14.14 = %d\n", ft_sqrt(b));
	printf("0 = %d\n", ft_sqrt(c));
	return (0);
}
*/
