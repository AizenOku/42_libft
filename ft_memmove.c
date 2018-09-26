/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 22:17:46 by ihuang            #+#    #+#             */
/*   Updated: 2018/09/24 18:50:08 by ihuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*ptr;

	ptr = dst;
	if (dst < src)
	{
		while ((size_t)(src - dst) < len)
		{
			*(unsigned char*)dst = *(unsigned char*)src;
			dst++;
			src++;
		}
	}
	else
	{
		while (len--)
		{
			*(unsigned char*)dst = *(unsigned char*)src;
			dst++;
			src++;
		}
	}	
	return (ptr);
}
