/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:53:21 by kamin             #+#    #+#             */
/*   Updated: 2021/10/14 04:02:52 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strtrim.c"
#include "ft_strdup.c"
#include "ft_strlen.c"
#include "ft_strlcpy.c"
#include "ft_substr.c"
#include "ft_strchr.c"

static int	ft_word_len(char *s, char c)
{
	int	word_len;

	word_len = 0;
	while (*s != c && *s++ != 0)
		word_len++;
	return (word_len);
}

static int	ft_word_count(char const *s, char c)
{
	int word_count;

	word_count = 0;
	while (*s)
	{
		if (*s == c && *(s - 1) != c)
			word_count++;
		s++;
	}
	return (word_count + 1);
}

static char	**ft_alloc_split(char *sc, int wc)
{
	char	**split;
	if (ft_strlen(sc) == 0)
		split = (char **)malloc(1 * sizeof(char *));
	else
		split = (char **)malloc((wc + 1) * sizeof(char *));
	if (wc == 0 || *sc == '\0')
		split[0] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	int		wc;
	int		wl;
	int		i;
	char*	sc;
	char**	split;

	sc = ft_strtrim(s, &c);
	wc = ft_word_count(sc, c);
	i = 0;
	split = ft_alloc_split(sc, wc);
	if (wc == 0 || *sc == '\0')
		return (split);
	while (i < wc)
	{
		wl = ft_word_len(sc, c);
		split[i] = (char *)malloc((wl + 1) * sizeof(char));
		ft_strlcpy(split[i], sc, wl + 1);
		sc += wl;
		while (*sc == c && c != 0)
			sc++;
		i++;
	}
	split[i] = 0;
	return (split);
}
