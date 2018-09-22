/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 18:15:47 by ihuang            #+#    #+#             */
/*   Updated: 2018/09/21 20:40:54 by ihuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long	ret;
	int			neg;

	neg = 1;
	ret = 0;
	while (!ft_isdigit(*str) && *str != '0')
	{
		if (*str == '-' && ft_isdigit(*(str + 1)))
		{
			neg = -1;
			str++;
			break ;
		}
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		ret = ret * 10 + *str - '0';
		str++;
	}
	return (neg * ret);
}
