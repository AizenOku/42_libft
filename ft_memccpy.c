/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 22:12:51 by ihuang            #+#    #+#             */
/*   Updated: 2018/09/20 11:53:09 by ihuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*p;
	const char	*s;

	p = (char*)dst;
	s = (const char *)src;
	while (n--)
	{
		if (*p == c)
			return (dst);
		*p++ = *s++;
	}
	return (dst);
}
