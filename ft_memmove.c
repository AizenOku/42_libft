/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 22:17:46 by ihuang            #+#    #+#             */
/*   Updated: 2018/09/20 11:58:22 by ihuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	char		*temp;
	int			i;

	d = (char*)dst;
	s = (const char *)src;
	temp = (char*)malloc(sizeof(char) * len);
	i = 0;
	while (i < (int)len)
	{
		temp[i] = s[i];
		i++;
	}
	while (len--)
		*d++ = *temp++;
	free(temp);
	return (dst);
}
