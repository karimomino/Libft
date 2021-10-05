/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:32:30 by kamin             #+#    #+#             */
/*   Updated: 2021/10/05 16:34:04 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	needle_size;
	int	match;
	int	offset;

	needle_size = ft_strlen(needle);
	match = 0;
	offset= 0;
	if (!needle_size)
		return ((char *)haystack);
	while (*haystack != 0 && len > 0 && match == 0)
	{
		match = 1;
		offset = 0;
		while (*(needle + offset) != 0 && match == 1)
		{
			if (*(needle + offset) == *(haystack + offset))
				offset++;
			else
			{
				haystack++;
				match = 0;
			}
		}
		len--;
	}
	if (match == 0)
		return (NULL);
	return ((char *)haystack);
}
