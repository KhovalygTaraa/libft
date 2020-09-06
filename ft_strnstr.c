/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 20:59:47 by swquinc           #+#    #+#             */
/*   Updated: 2020/05/30 14:48:19 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (!*needle)
		return ((char*)haystack);
	while (haystack[a] != 0 && a < len)
	{
		if (haystack[a] == needle[0])
		{
			b = 0;
			while (haystack[a + b] == needle[b] && (a + b) < len)
			{
				if (needle[b + 1] == 0)
					return ((char*)&haystack[a]);
				b++;
			}
		}
		a++;
	}
	return (0);
}
