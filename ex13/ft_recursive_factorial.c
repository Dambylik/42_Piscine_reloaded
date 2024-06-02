/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:39:44 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/15 17:48:00 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}

/*
#include <stdio.h>

int     main(void)
{
        int     x;
        int     y;
        int     z;

        x = 10;
        y = 1;
        z = 0;
        printf("factorial of %d is %d\n", x, ft_recursive_factorial(x));
        printf("factorial of %d is %d\n", y, ft_recursive_factorial(y));
        printf("factorial of %d is %d\n", z, ft_recursive_factorial(z));
        return (0);
}
*/
