/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaso <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:02:15 by amaso             #+#    #+#             */
/*   Updated: 2022/01/13 17:23:00 by amaso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int		c;
	int		i;
	long	r;

	r = 0;
	c = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		c = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] <= '9' && '0' <= str[i])
	{
		r = r * 10 + str[i] - '0';
		if (r * c < -2147483648 || r * c > 2147483647)
			return ((r * c < -2147483648) - 1);
		i++;
	}
	return (r * c);
}
