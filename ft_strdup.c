/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 18:46:43 by kamin             #+#    #+#             */
/*   Updated: 2021/09/30 10:28:04 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		len;

	len = ft_strlen(s1);
	dup = (char *)malloc((len) * sizeof(char));
	ft_strlcpy(dup, s1, len);
	return (dup);
}
