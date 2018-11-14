/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 22:40:34 by ihuang            #+#    #+#             */
/*   Updated: 2018/11/09 15:09:37 by ihuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_printf.h"

int		ft_write_len(char c)
{
	write(1, &c, 1);
	return (1);
}

int		ft_putstr_len(char *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
	return (len);
}
