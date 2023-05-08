# include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *ptr;
	size_t i;

	ptr = (char *) malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
		ptr[i++] = 0;
	return (void *)ptr;
}