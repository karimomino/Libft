#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		len;
	char	*string;

	len = ft_strlen(s);
	string = (char *)s;
	while (len-- >= 0)
	{
		if (*string == c)
			return (string);
		string++;
	}
	return (NULL);
}
