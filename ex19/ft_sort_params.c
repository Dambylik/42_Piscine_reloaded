/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:08:10 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/18 10:47:00 by Olly             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
void	ft_putchar(char c);
/*
{
	write (1, &c, 1);
}
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
*/
void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			i++;
			ft_putchar('\n');
		}
	}
}

int	main(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = i;
		while (j > 1 && ft_strcmp(argv[j], argv[j - 1]) < 0)
		{
			temp = argv[j - 1];
			argv[j - 1] = argv[j];
			argv[j] = temp;
			j--;
		}
		i++;
	}
	ft_print_params(argc, argv);
	return (0);
}
