/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:17:43 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/18 13:17:42 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void	ft_putnbr(int	n)
{
	printf("%d\n", n);
}

int	main(void)
{
	int	tab[] = {5,8,11};
	int	length = 3;
	ft_foreach(tab, length, &ft_putnbr);
	return (0);
}*/
