/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 22:38:14 by ihuang            #+#    #+#             */
/*   Updated: 2018/09/20 11:59:09 by ihuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;
	const char	*end;

	p = (const char*)s;
	end = p + n;
	while (n--)
	{
		if (*p == c)
			break ;
		p++;
	}
	if (p >= end)
		return (NULL);
	else
		return ((void*)p);
}
