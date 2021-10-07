/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:32:30 by kamin             #+#    #+#             */
/*   Updated: 2021/10/07 23:33:00 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			size;
	size_t			chara;
	const char		*needle_cpy;

	size = len;
	chara = len;
	needle_cpy = needle;
	if (*haystack == 0)
		return (NULL);
	while (size > len - ft_strlen(needle) && chara-- > 0)
	{
		if (*haystack == *needle_cpy)
		{
			needle_cpy++;
			size--;
		}
		else
		{
			needle_cpy = needle;
			size = len;
		}
		haystack++;
	}
	if (size != len - ft_strlen(needle))
		return (NULL);
	return ((char *)haystack - ft_strlen(needle));
}
