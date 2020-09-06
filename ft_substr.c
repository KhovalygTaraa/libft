/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 17:21:17 by swquinc           #+#    #+#             */
/*   Updated: 2020/09/06 15:34:13 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*a;
	size_t		b;

	if (!s)
		return (0);
	b = (ft_strlen(s + start));
	if (ft_strlen(s) <= start || len == 0)
		return (ft_strdup(""));
	if (b < len)
		len = b;
	a = (char*)malloc((len + 1) * (sizeof(char)));
	if (!a)
		return (NULL);
	ft_strlcpy(a, s + start, len + 1);
	return (a);
}
