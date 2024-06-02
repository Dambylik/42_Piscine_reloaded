/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:09:12 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/15 17:48:26 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char s[] = "";
	printf("%d\n", ft_strlen(s));
	printf("%lu\n", strlen(s));
	return (0);
}
*/
