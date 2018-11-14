/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 16:35:53 by ihuang            #+#    #+#             */
/*   Updated: 2018/11/09 15:15:38 by ihuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "b_printf.h"

int		parse_format(const char *fmt, va_list list)
{
	int		count;

	count = 0;
	while (*fmt)
	{
		while (*fmt && *fmt != '%')
			count += ft_write_len(*fmt++);
		if (*fmt == '%')
		{
			fmt++;
			if (*fmt == '\0')
			{
				count += ft_write_len('%');
				continue ;
			}
			if (ft_strchr("scdiouxp%", *fmt))
				count += handle(*fmt, list);
			else
				count += ft_write_len(*fmt);
			fmt++;
		}
	}
	return (count);
}

int		b_printf(const char *restrict format, ...)
{
	va_list	list;
	int		res;

	va_start(list, format);
	res = parse_format(format, list);
	va_end(list);
	return (res);
}
