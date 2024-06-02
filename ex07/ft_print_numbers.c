/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:40:27 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/17 10:48:17 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	nr;

	nr = '0';
	while (nr >= '0' && nr <= '9')
	{
		ft_putchar(nr);
		nr++;
	}
}
/*
 int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
