/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:25:14 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/17 15:04:34 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	alpha;

	alpha = 'a';
	while (alpha >= 'a' && alpha <= 'z')
	{
		ft_putchar(alpha);
		alpha++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
