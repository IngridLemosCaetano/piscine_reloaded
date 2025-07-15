/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 21:24:47 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/11 16:17:37 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	sum;

	sum = 1;
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
	{
		while (nb > 1)
		{
			sum *= nb;
			nb--;
		}
		return (sum);
	}
}
/*
int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d! = %d", nb, ft_iterative_factorial(nb));
	return (0);
}*/
