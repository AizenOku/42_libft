/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:13:48 by ihuang            #+#    #+#             */
/*   Updated: 2018/09/13 22:51:35 by ihuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int	ft_strlen(const char *s)
{
	int			len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char		*ft_strdup(const char *s1)
{
	char		*str2;
	int			i;
	int			n;

	n = ft_strlen(s1);
	if (!(str2 = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	i = 0;
	while (i < n)
	{
		str2[i] = s1[i];
		i++;
	}
	str2[i] = '\0';
	return ((char *)str2);
}
