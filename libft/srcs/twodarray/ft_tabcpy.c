#include "../../hdrs/libft.h"

char	**ft_tabcpy(char **dst, char **src)
{
	size_t	i;

	if (!dst || !src)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dst[i] = ft_strdup(src[i]);
		i++;
	}
	return (dst);
}