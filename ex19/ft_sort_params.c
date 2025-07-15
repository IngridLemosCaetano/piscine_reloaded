/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 10:47:06 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/12 18:15:11 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_arg(int argc, char *argv[])
{
	int		x;
	int		y;
	char	*aux;

	x = 1;
	while (x < argc -1)
	{
		y = x + 1;
		while (y < argc)
		{
			if (ft_strcmp (argv[x], argv[y]) > 0)
			{
				aux = argv[x];
				argv[x] = argv[y];
				argv[y] = aux;
			}
			y++;
		}
		x++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc > 1)
	{
		ft_sort_arg(argc, argv);
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
