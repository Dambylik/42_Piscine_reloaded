/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:16:19 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/18 10:54:34 by Olly             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str1[] = "";
	char	str2[] = "ABC";

	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", strcmp(str1, str2));
	return (0);
}
*/
