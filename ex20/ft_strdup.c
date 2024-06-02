/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:03:57 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/15 17:35:58 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	char	*p;

	str = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!(str))
		return (NULL);
	p = str;
	while (*src)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (str);
}
/*
#include <stdio.h>

int main()
{
    char source[] = "    t";
    char *target;
    target = ft_strdup(source); 
    printf("%s", target);
    return (0);
}
*/