/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:16:25 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/14 16:39:27 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*p;
	int	i;

	size = max - min;
	if (size <= 0)
		return (NULL);
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < size)
		{
			p[i] = min + i;
			i++;
		}
	}
	return (p);
}
/*
int	main(void)
{
	int	min;
	int	max;

	min = 20;
	max = 30;
	while (min < max)
	{
		printf("%p\n", ft_range(min, max));
		min++;
	}
	return (0);
}*/
// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*range;
// 	int	size;
// 	int	i;

// 	min = 20;
// 	max = 30;
// 	i = 0;
// 	size = max - min;
// 	range = ft_range(min, max);
// 	if (range != NULL)
// 	{
// 		while (i < size)
// 		{
// 			printf("%d\n", range[i]);
// 			i++;
// 		}
// 		free(range);
// 	}
// 	else
// 	{
// 		printf("erro ao alocar memória.");
// 	}
// 	return (0);
// }
