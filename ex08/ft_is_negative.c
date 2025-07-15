/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:59:02 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/12 11:57:38 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	n;

	x = 10;
	y = -10;
	n = 0;
	ft_is_negative(x);
	ft_is_negative(y);
	ft_is_negative(n);
}*/
