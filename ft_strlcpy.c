/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:17:33 by swquinc           #+#    #+#             */
/*   Updated: 2020/09/06 15:34:13 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcpy(char *dst, const char *src, size_t s)
{
	size_t		i;
	size_t		p;

	if (!src)
		return (0);
	p = ft_strlen(src);
	i = 0;
	if (s == 0)
		return (p);
	if (dst && src && s)
	{
		while (src[i] != 0 && i < s - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (p);
}
