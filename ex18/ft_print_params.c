/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:49:51 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/12 11:50:03 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc >= 2)
	{
		j = 1;
		while (j < argc)
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				ft_putchar(argv[j][i]);
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}
	return (0);
}
