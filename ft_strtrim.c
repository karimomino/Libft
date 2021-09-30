/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 20:20:25 by kamin             #+#    #+#             */
/*   Updated: 2021/09/30 12:19:27 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		setlen;
	int		s1len;

	setlen = ft_strlen(set);
	s1len = ft_strlen(s1);
	while (ft_strchr(set, *(s1++)))
		s1len--;
	s1--;
	while (ft_strchr(set, s1[s1len]))
		s1len--;
	s1len++;
	trimmed = ft_substr(s1, 0, s1len);
	if (trimmed == NULL)
		return (NULL);
	return (trimmed);
}
