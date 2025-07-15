/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:09:50 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/11 13:38:59 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	if (nb <= 0)
		return (0);
	else if ((num * num) == nb)
		return (num);
	else
	{
		while ((num * num) == nb || (num * num) < nb)
		{
			if (num * num == nb)
				return (num);
			num++;
		}
	}
	return (0);
}
/*
int	main (void)
{
	int	i = 10000;

	printf("Raiz quadrada de %d: %d", i, ft_sqrt(i));
	return (0);
}*/
