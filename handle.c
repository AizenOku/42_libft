/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 22:12:52 by ihuang            #+#    #+#             */
/*   Updated: 2018/11/09 16:19:20 by ihuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_printf.h"

int		handle(const char c, va_list list)
{
	char			*s;
	char			ch;

	if (c == 'c' || c == '%')
	{
		if (c == '%')
			ch = '%';
		else
			ch = va_arg(list, int);
		write(1, &ch, 1);
		return (1);
	}
	else if (c == 's')
	{
		if ((s = va_arg(list, char*)) != NULL)
			return (ft_putstr_len(s));
		else
			return (ft_putstr_len("(null)"));
	}
	else if (c == 'p')
		return (print_memory(list));
	return (handle2(c, list));
}

int		handle2(const char c, va_list list)
{
	int				i;
	int				count;
	char			*str;
	unsigned int	u;

	count = 0;
	if (c == 'd' || c == 'i')
	{
		i = va_arg(list, int);
		str = ft_itoa_base(i, 10);
	}
	else
	{
		u = va_arg(list, unsigned int);
		if (c == 'u')
			str = ft_itoa_base(u, 10);
		else if (c == 'o')
			str = ft_itoa_base(u, 8);
		else
			str = ft_itoa_base(u, 16);
	}
	count = ft_putstr_len(str);
	free(str);
	return (count);
}

int		print_memory(va_list list)
{
	void			*ptr;

	write(1, "0x", 2);
	ptr = va_arg(list, void*);
	if (ptr == NULL)
		return (2 + ft_putstr_len("0"));
	return (2 + ft_putstr_len(ft_itoa_base((unsigned long)ptr, 16)));
}
