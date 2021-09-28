/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 07:58:53 by kamin             #+#    #+#             */
/*   Updated: 2021/09/28 12:52:17 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*destination;
	char	*buff;
	size_t	i;

	source = (char *)src;
	destination = dst;
	buff = malloc(len * sizeof(char));
	i = 0;
	while (i++ < len)
	{
		buff[i - 1] = source[i - 1];
	}
	i = 0;
	while (i++ < len)
	{
		destination[i - 1] = source[i - 1];
	}
	return (dst);
}
