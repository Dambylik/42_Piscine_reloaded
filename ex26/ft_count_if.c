/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 22:20:24 by Olly              #+#    #+#             */
/*   Updated: 2024/05/17 11:39:13 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>

void		ft_putchar(char c)	
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
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

int	ft_find_separator(char *str)
{
	int i;
	int boolean;

	i = 0;
	boolean = 0;
	while (str[i])
	{
		if (str[i] < '!')
			boolean = 1;
		i++;
	}
	return (boolean);
}
*/
int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

/*
int 		main(void)
{
	char *arr[4] = {"coucou", \
			  "cou cou", \
			  "c o u cou"};
	ft_putnbr(ft_count_if(arr, &ft_find_separator));
	ft_putchar('\n');

    return (0);
}
*/
