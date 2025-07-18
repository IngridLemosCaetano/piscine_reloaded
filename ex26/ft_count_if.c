/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilemos-c <ilemos-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:26:09 by ilemos-c          #+#    #+#             */
/*   Updated: 2025/07/18 18:17:44 by ilemos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (&tab[i])
	{
		f(tab[i]);
		i++;
	}
	return (tab[i]);
}
int	ft_strlen(char	*str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

char	ft_cast(int n)
{
	return (n + '0');
}
int	main(void)
{
	char	*tab = "Ingrid";
	int	n = 3;
	ft_cast(n);
	ft_count_if(&tab, ft_strlen(tab));
	return (0);
}
