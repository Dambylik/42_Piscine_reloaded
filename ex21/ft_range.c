/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:05:59 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/16 13:07:56 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min));
	if (!(array))
		return (0);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>

int main (void)
{
	int min = 3;
	int max = 6;
	int *tab = ft_range(min, max);
	int i = 0;
	int size = max - min;
	
	while (i < size)
{
	printf("%d\n", tab[i]);
	i++;
}
free (tab);

return (0);
}
*/
