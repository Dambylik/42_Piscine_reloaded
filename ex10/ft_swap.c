/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:46:00 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/15 17:47:38 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 10;
	printf("x = %d\n, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("x = %d\n, y = %d\n", x, y);
	return (0);
}
*/
