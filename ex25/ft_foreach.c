/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:14:50 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/16 17:09:54 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

/*
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{	
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}
*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
int 		main(void)
{
	int	tab[] = {1,2,3,4,5,6,7,8,9};
	ft_foreach(tab, 9, &ft_putnbr);
	ft_putchar('\n');
    return (0);
}
*/