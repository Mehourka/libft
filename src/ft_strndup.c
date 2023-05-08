#include "libft.h"

char	*ft_strndup(char const *s, size_t n){
	size_t	tot_len;
	char	*new_str;


	tot_len = ft_min(ft_strlen(s), n) + 1;

	new_str = malloc(tot_len);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s, tot_len);
	return new_str;
}