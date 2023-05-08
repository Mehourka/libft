#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t i;
	unsigned char *pdest;
	unsigned char *psrc;

	if (!dest)
		return (NULL);

	pdest = dest;
	psrc = src;

	i = 0;
	while(i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}

	return dest;
}